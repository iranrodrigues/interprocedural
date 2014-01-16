package interprocedural;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

import tree.CompoundStatement;
import tree.FunctionCall;
import tree.FunctionDef;
import tree.Id;
import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
import tree.visitor.VisitorPrinterNames;
import core.ASTGenerator;
import core.RefactoringType;
import de.fosd.typechef.FrontendOptions;
import de.fosd.typechef.FrontendOptionsWithConfigFiles;
import de.fosd.typechef.Lex;
import de.fosd.typechef.lexer.options.OptionException;
import de.fosd.typechef.parser.TokenReader;
import de.fosd.typechef.parser.c.AST;
import de.fosd.typechef.parser.c.CParser;
import de.fosd.typechef.parser.c.CToken;
import de.fosd.typechef.parser.c.CTypeContext;
import de.fosd.typechef.parser.c.ParserMain;

public class TestInterProcedural {

	public static void main(String[] args) {
		String textSelection = "int x;\n" + 
				"int y = x + 10;\n" + 
				"\n" + 
				"void foo(int a) {\n" + 
				"	a = 10;\n" + 
				"}\n" + 
				"\n" + 
				"void bar() {\n" + 
				"#ifdef A\n" + 
				"	foo(1);\n" + 
				"#endif\n" + 
				"}";

		String stubs = "";

		// Writing stubs to stubs.h file
		PrintWriter outStubs = null;
		String stubsFilePath = System.getProperty("java.io.tmpdir")
				+ System.getProperty("file.separator") + "stubs.h";

		try {
			outStubs = new PrintWriter(stubsFilePath);
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
		outStubs.println(stubs);
		outStubs.flush();
		outStubs.close();

		try {
			new TestInterProcedural().refactorCode(textSelection, stubsFilePath,
					RefactoringType.REFACT_INCOMPLETESTMTS);
		} catch (OptionException e) {
			e.printStackTrace();
		}
	}
	
	public static final String inputFilePath = System
			.getProperty("java.io.tmpdir")
			+ System.getProperty("file.separator") + "input.c";
	public static final String outputFilePath = System
			.getProperty("java.io.tmpdir")
			+ System.getProperty("file.separator") + "output.c";

	public String refactorCode(String textSelection, String stubsPath,
			RefactoringType refactoringType) throws OptionException {

		// ParserOptions myParserOptions = new MyParserOptions();

		FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
		ArrayList<String> paramters = new ArrayList<String>();

		paramters.add("--lexNoStdout");
		paramters.add("-h");
		paramters.add(stubsPath);

		// Writing textSelection to input.c file
		PrintWriter out = null;
		try {
			out = new PrintWriter(inputFilePath);
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
		out.println(textSelection);
		out.flush();
		out.close();

		paramters.add(inputFilePath);

		String[] paramterArray = paramters
				.toArray(new String[paramters.size()]);

		myParserOptions.parseOptions(paramterArray);

		ParserMain parser = new ParserMain(new CParser(null, false));

		TokenReader<CToken, CTypeContext> in = Lex.lex(myParserOptions);

		// FASTER
		AST ast = parser.parserMain(in, myParserOptions);
		//System.out.println(ast);

		tree.Node myAst = new TranslationUnit();
		new ASTGenerator().generate(ast, myAst);

		//myAst.accept(new VisitorPrinter(false));
		
		myAst.accept(new VisitorASTOrganizer());
		
		//myAst.accept(new VisitorPrinterNames());
		
		//myAst.accept(new TesteVisitor());

		//myAst.accept(new VisitorASTOrganizer());

		FindGlobalVariablesDeclarationsVisitor findGlobalVariablesDeclarationsVisitor = new FindGlobalVariablesDeclarationsVisitor();
		
		myAst.accept(new PresenceConditionVisitor());
		myAst.accept(findGlobalVariablesDeclarationsVisitor);
		
		List<Id> globalVariablesDeclarations = findGlobalVariablesDeclarationsVisitor.getGlobalVariablesDeclarations();
		
		for (Id globalVariableDeclaration : globalVariablesDeclarations) {
			
			FindGlobalVariableUsesVisitor findGlobalVariableUsesVisitor = new FindGlobalVariableUsesVisitor(globalVariableDeclaration);
			myAst.accept(findGlobalVariableUsesVisitor);
			
			List<Id> globalVariableUses = findGlobalVariableUsesVisitor.getGlobalVariableUses();
			
			for (Id globalVariableUse : globalVariableUses) {
				System.out.println(globalVariableUse.getName());
				FindVariableFunctionVisitor findVariableFunctionVisitor = new FindVariableFunctionVisitor();
				globalVariableUse.accept(findVariableFunctionVisitor);
				
				FunctionDef variableFunction = findVariableFunctionVisitor.getFunction();
				
				List<CompoundStatement> scope = findVariableFunctionVisitor.getScope();
				FindVariableDeclarationVisitor findVariableDeclarationVisitor = new FindVariableDeclarationVisitor(globalVariableUse, scope);
				variableFunction.accept(findVariableDeclarationVisitor);
				
				if (!(findVariableDeclarationVisitor.isFound())) {
					System.out.println("Feature " + globalVariableDeclaration.getPresenceCondition().and(globalVariableUse.getPresenceCondition()).toTextExpr() + " in function (" + ((Id) variableFunction.getChildren().get(1).getChildren().get(0)).getName() +  ") uses global " + globalVariableDeclaration.getName() + " at " + globalVariableUse.getPositionFrom() + ".\n");
				}
			}
		}
		
		//myAst.accept(new FunctionVariableVisitor());
		
		FindFunctionsVisitor findFunctionsVisitor = new FindFunctionsVisitor();
		myAst.accept(findFunctionsVisitor);
		
		List<FunctionDef> functions = findFunctionsVisitor.getFunctions();
		
		for (FunctionDef function : functions) {
			
			FindFunctionCallsVisitor findFunctionCallsVisitor = new FindFunctionCallsVisitor(function);
			myAst.accept(findFunctionCallsVisitor);
			List<FunctionCall> functionCalls = findFunctionCallsVisitor.getFunctionCalls();
			
			FindFunctionParametersVisitor findFunctionParametersVisitor = new FindFunctionParametersVisitor();
			function.accept(findFunctionParametersVisitor);
			List<Id> functionParameters = findFunctionParametersVisitor.getFunctionParameters();
			
			for (Id functionParameter : functionParameters) {
				
				FindFunctionParameterUsesVisitor findFunctionParameterUsesVisitor = new FindFunctionParameterUsesVisitor(functionParameter);
				function.accept(findFunctionParameterUsesVisitor);
				List<Id> functionParameterUses = findFunctionParameterUsesVisitor.getFunctionParameterUses();
				
				for (Id functionParameterUse : functionParameterUses) {
					
					List<CompoundStatement> scope = new ArrayList<CompoundStatement>();
					scope.add((CompoundStatement) function.getChildren().get(2));
					FindVariableDeclarationVisitor findVariableDeclarationVisitor = new FindVariableDeclarationVisitor(functionParameterUse, scope);
					function.accept(findVariableDeclarationVisitor);
					
					if (!(findVariableDeclarationVisitor.isFound())) {
						for (FunctionCall functionCall : functionCalls) {
							
							if ((!(functionCall.getPresenceCondition().equivalentTo(functionParameterUse.getPresenceCondition())) && // non equivalent presence condition
								(!(functionCall.getPresenceCondition().and(functionParameterUse.getPresenceCondition()).isContradiction())))) { // presence condition in function call *and* parameter use cannot be a contradiction
								System.out.println("Feature " + functionCall.getPresenceCondition().and(functionParameterUse.getPresenceCondition()).toTextExpr() + " in function (" + ((Id) function.getChildren().get(1).getChildren().get(0)).getName() +  ") uses " + functionParameterUse.getName() + " at " + functionParameterUse.getPositionFrom() + ".\n");
							}
						}
						//System.out.println("Feature " + globalVariableDeclaration.getPresenceCondition().and(globalVariableUse.getPresenceCondition()).toTextExpr() + " in function (" + ((Id) variableFunction.getChildren().get(1).getChildren().get(0)).getName() +  ") uses " + globalVariableDeclaration.getName() + " at " + globalVariableUse.getPositionFrom() + ".\n");
					}
				}
			}
		}
		
		/*FindDirectivesVisitor findDirectivesVisitor = new FindDirectivesVisitor();
		myAst.accept(findDirectivesVisitor);
		
		List<Opt> directives = findDirectivesVisitor.getPreprocessorDirectives();
		
		FindVariablesWithinDirectivesVisitor findVariablesWithinDirectivesVisitor;
		
		for (Opt directive : directives) {
			System.out.println("Searching directive: " + directive.getConditional() + "...\n");
			
			findVariablesWithinDirectivesVisitor = new FindVariablesWithinDirectivesVisitor();
			directive.accept(findVariablesWithinDirectivesVisitor);
			
			List<Id> variables = findVariablesWithinDirectivesVisitor.getVariables();
			
			for (Id variable : variables) {
				System.out.println("Variable found: " + variable.getName());
				
				FindVariableScopeVisitor findVariableScopeVisitor = new FindVariableScopeVisitor();
				variable.accept(findVariableScopeVisitor);
				
				Node scope = findVariableScopeVisitor.getScope();
				if (scope instanceof FunctionDef) {
					System.out.println("Variable used inside function: " + ((Id) scope.getChildren().get(1).getChildren().get(0)).getName());
					
					FindVariableDeclarationVisitor findVariableDeclarationVisitor = new FindVariableDeclarationVisitor(variable);
					scope.accept(findVariableDeclarationVisitor);
					
					if (!(findVariableDeclarationVisitor.isFound())) {
						System.out.println("Feature " + directive.getConditional().toTextExpr() + " in function (" + ((Id) scope.getChildren().get(1).getChildren().get(0)).getName() +  ") uses " + variable.getName() + ".\n");
					} else {
						System.out.println("Variable declaration found within function\n");
					}
					
				} else {
					System.out.println("Variable used outside function\n");
				}
			}
			
		}*/

		
		// FIND PATTERNS
		//myAst.accept(new PresenceConditionVisitor());
		//myAst.accept(new FunctionVariableVisitor());
		

		/*try {
			new CodeOrganizer().organize();
		} catch (IOException e) {
			e.printStackTrace();
		}

		try {
			Runtime.getRuntime().exec(
					"/opt/local/bin/uncrustify -o " + outputFilePath
							+ " -c default.cfg -f " + outputFilePath);
		} catch (IOException e) {
			e.printStackTrace();
		}

		String outputFile = "";

		try {
			outputFile = this.readFile(outputFilePath);
		} catch (IOException e) {
			e.printStackTrace();
		}
		return outputFile;*/
		
		return "";
	}

	public String readFile(String fileName) throws IOException {
		BufferedReader br = new BufferedReader(new FileReader(fileName));
		try {
			StringBuilder sb = new StringBuilder();
			String line = br.readLine();

			while (line != null) {
				sb.append(line);
				sb.append("\n");
				line = br.readLine();
			}
			return sb.toString();
		} finally {
			br.close();
		}
	}

	
}
