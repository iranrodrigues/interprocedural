package interprocedural;

import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import tree.CompoundStatement;
import tree.FunctionCall;
import tree.FunctionDef;
import tree.Id;
import tree.Opt;
import tree.TranslationUnit;
import tree.visitor.VisitorASTOrganizer;
import core.ASTGenerator;
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
	
	private List<Dependency> dependencies = new ArrayList<Dependency>();
	private Map<FunctionDef, Function> functions = new HashMap<FunctionDef, Function>();
	private Map<String, FunctionMetrics> functionMetricsMap = new HashMap<String, FunctionMetrics>();
	private String filePath;
	private String stubsPath;

	public TestInterProcedural(String filePath, String stubsPath) {
		this.filePath = filePath;
		this.stubsPath = stubsPath;
	}
	
	public TestInterProcedural(String filePath) {
		this.filePath = filePath;
		this.stubsPath = System.getProperty("java.io.tmpdir") + System.getProperty("file.separator") + "stubs.h";
		
		PrintWriter out = null;
		try {
			out = new PrintWriter(stubsPath);
			out.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		}
	}

	public List<Dependency> getDependencies() {
		return dependencies;
	}

	public Map<String, FunctionMetrics> getFunctionMetricsMap() {
		return functionMetricsMap;
	}
	
	public String getFilePath() {
		return filePath;
	}
	
	public String getStubsPath() {
		return stubsPath;
	}

	public static void main(String[] args) {
		TestInterProcedural testInterProcedural = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test7.c");
		try {
			testInterProcedural.refactorCode();
			System.out.println(testInterProcedural.testFunctions());
			System.out.println(testInterProcedural.testDependencies());
		} catch (OptionException e) {
			e.printStackTrace();
		}
	}
	
	public String refactorCode() throws OptionException {

		FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
		ArrayList<String> parameters = new ArrayList<String>();

		parameters.add("--lexNoStdout");
		parameters.add("-h");
		parameters.add(this.stubsPath);
		parameters.add(this.filePath);

		String[] parameterArray = parameters
				.toArray(new String[parameters.size()]);

		myParserOptions.parseOptions(parameterArray);

		ParserMain parser = new ParserMain(new CParser(null, false));

		TokenReader<CToken, CTypeContext> in = Lex.lex(myParserOptions);

		AST ast = parser.parserMain(in, myParserOptions);
		tree.Node myAst = new TranslationUnit();
		new ASTGenerator().generate(ast, myAst);
		
		myAst.accept(new VisitorASTOrganizer());
		//myAst.accept(new VisitorPrinter(false));
		
		//myAst.accept(new VisitorPrinterNames());

		FindGlobalVariablesDeclarationsVisitor findGlobalVariablesDeclarationsVisitor = new FindGlobalVariablesDeclarationsVisitor();
		
		myAst.accept(new PresenceConditionVisitor());
		myAst.accept(findGlobalVariablesDeclarationsVisitor);
		
		FindFunctionsVisitor findFunctionsVisitor = new FindFunctionsVisitor();
		myAst.accept(findFunctionsVisitor);
		
		List<FunctionDef> functionDefs = findFunctionsVisitor.getFunctions();
		for (FunctionDef functionDef : functionDefs) {
			FindFunctionDirectivesVisitor findFunctionDirectivesVisitor = new FindFunctionDirectivesVisitor();
			functionDef.accept(findFunctionDirectivesVisitor);
			Set<Opt> functionDirectives = findFunctionDirectivesVisitor.getFunctionDirectives();			
			FindFunctionParametersVisitor findFunctionParametersVisitor = new FindFunctionParametersVisitor();
			functionDef.accept(findFunctionParametersVisitor);
			Set<Id> functionParameters = findFunctionParametersVisitor.getFunctionParameters();
			Function function = new Function(functionDef, functionParameters);
			function.setDirectives(functionDirectives);
			functions.put(functionDef, function);
			FunctionMetrics functionMetrics = new FunctionMetrics(function);
			functionMetricsMap.put(function.getName(), functionMetrics);
		}
		
		List<Id> globalVariablesDeclarations = findGlobalVariablesDeclarationsVisitor.getGlobalVariablesDeclarations();
		
		for (Id globalVariableDeclaration : globalVariablesDeclarations) {
			
			FindGlobalVariableUsesVisitor findGlobalVariableUsesVisitor = new FindGlobalVariableUsesVisitor(globalVariableDeclaration);
			myAst.accept(findGlobalVariableUsesVisitor);
			
			List<Id> globalVariableUses = findGlobalVariableUsesVisitor.getGlobalVariableUses();
			
			for (Id globalVariableUse : globalVariableUses) {
							
				FindVariableFunctionVisitor findVariableFunctionVisitor = new FindVariableFunctionVisitor();
				globalVariableUse.accept(findVariableFunctionVisitor);
				
				FunctionDef functionDef = findVariableFunctionVisitor.getFunctionDef();
				// If global variable use is outside a function, skip it
				if (functionDef == null) {
					continue;
				}
				
				Function function = functions.get(functionDef);
				
				List<CompoundStatement> scope = findVariableFunctionVisitor.getScope();
				FindVariableDeclarationVisitor findVariableDeclarationVisitor = new FindVariableDeclarationVisitor(globalVariableUse, scope, true);
				functionDef.accept(findVariableDeclarationVisitor);
				
				if (!(findVariableDeclarationVisitor.isFound())) {
					
					Dependency dependency = new GlobalVariableDependency(function, globalVariableDeclaration.getPresenceCondition().and(globalVariableUse.getPresenceCondition()), globalVariableUse.getPresenceCondition(), globalVariableDeclaration.getPresenceCondition(), globalVariableUse, globalVariableDeclaration);
					if ((dependency.getInnerFile().equals(this.stubsPath)) || (dependency.getOuterFile().equals(this.stubsPath))) {
						continue;
					}
					dependencies.add(dependency);
					functionMetricsMap.get(dependency.getFunction().getName()).getDependencies().add(dependency);
				} else {
					// If there is a local variable with same name as the global, whose existence depends on a directive, there is a dependency
					if ((!(findVariableDeclarationVisitor.getPresenceCondition().equivalentTo(globalVariableUse.getPresenceCondition())))
					&& (!(globalVariableDeclaration.getPresenceCondition().and(globalVariableUse.getPresenceCondition()).and(findVariableDeclarationVisitor.getPresenceCondition())).isContradiction())) {
						// Presence condition now depends on the non-declaration of the local variable 
						Dependency dependency = new GlobalVariableDependency(function, globalVariableDeclaration.getPresenceCondition().and(globalVariableUse.getPresenceCondition()).and(findVariableDeclarationVisitor.getPresenceCondition()), globalVariableUse.getPresenceCondition(), globalVariableDeclaration.getPresenceCondition(), globalVariableUse, globalVariableDeclaration);
						if ((dependency.getInnerFile().equals(this.stubsPath)) || (dependency.getOuterFile().equals(this.stubsPath))) {
							continue;
						}
						dependencies.add(dependency);
						functionMetricsMap.get(dependency.getFunction().getName()).getDependencies().add(dependency);
					}
				}
			}
		}
		
		for (Entry<FunctionDef, Function> functionMap : functions.entrySet()) {
			
			Function function = functionMap.getValue();
			FunctionDef functionDef = function.getFunctionDef();
			
			FindFunctionCallsVisitor findFunctionCallsVisitor = new FindFunctionCallsVisitor(functionDef);
			myAst.accept(findFunctionCallsVisitor);
			List<FunctionCall> functionCalls = findFunctionCallsVisitor.getFunctionCalls();
			
			function.setFunctionCalls(functionCalls);
			
			FindFunctionParametersVisitor findFunctionParametersVisitor = new FindFunctionParametersVisitor();
			functionDef.accept(findFunctionParametersVisitor);
			Set<Id> functionParameters = findFunctionParametersVisitor.getFunctionParameters();

			for (Id functionParameter : functionParameters) {
				
				FindFunctionParameterUsesVisitor findFunctionParameterUsesVisitor = new FindFunctionParameterUsesVisitor(functionParameter);
				functionDef.accept(findFunctionParameterUsesVisitor);
				List<Id> functionParameterUses = findFunctionParameterUsesVisitor.getFunctionParameterUses();
				
				for (Id functionParameterUse : functionParameterUses) {
					
					List<CompoundStatement> scope = new ArrayList<CompoundStatement>();
					
					for (int i = 0; i < functionDef.getChildren().size(); i++) {
						if (functionDef.getChildren().get(i) instanceof CompoundStatement) {
							scope.add((CompoundStatement) functionDef.getChildren().get(i));
						}
					}
					
					FindVariableDeclarationVisitor findVariableDeclarationVisitor = new FindVariableDeclarationVisitor(functionParameterUse, scope, false);
					functionDef.accept(findVariableDeclarationVisitor);
					
					if (!(findVariableDeclarationVisitor.isFound())) {
						for (FunctionCall functionCall : functionCalls) {
							
							if ((!(functionCall.getPresenceCondition().equivalentTo(functionParameterUse.getPresenceCondition())) && // non equivalent presence condition
								(!(functionCall.getPresenceCondition().and(functionParameterUse.getPresenceCondition()).isContradiction())))) { // presence condition in function call *and* parameter use cannot be a contradiction
								
								Dependency dependency = new FunctionCallDependency(function, functionCall.getPresenceCondition().and(functionParameterUse.getPresenceCondition()), functionParameterUse.getPresenceCondition(), functionCall.getPresenceCondition(), functionParameterUse, functionCall);
								if ((dependency.getInnerFile().equals(this.stubsPath)) || (dependency.getOuterFile().equals(this.stubsPath))) {
									continue;
								}
								dependencies.add(dependency);
								functionMetricsMap.get(dependency.getFunction().getName()).getDependencies().add(dependency);
							}
						}
					} else {
						for (FunctionCall functionCall : functionCalls) {
							if ((!(functionCall.getPresenceCondition().equivalentTo(functionParameterUse.getPresenceCondition())) && // non equivalent presence condition
								(!(functionCall.getPresenceCondition().and(functionParameterUse.getPresenceCondition()).and(findVariableDeclarationVisitor.getPresenceCondition()).isContradiction())))) { // presence condition in function call *and* parameter use cannot be a contradiction
								
								Dependency dependency = new FunctionCallDependency(function, functionCall.getPresenceCondition().and(functionParameterUse.getPresenceCondition()).and(findVariableDeclarationVisitor.getPresenceCondition()), functionParameterUse.getPresenceCondition(), functionCall.getPresenceCondition(), functionParameterUse, functionCall);
								if ((dependency.getInnerFile().equals(this.stubsPath)) || (dependency.getOuterFile().equals(this.stubsPath))) {
									continue;
								}
								dependencies.add(dependency);
								functionMetricsMap.get(dependency.getFunction().getName()).getDependencies().add(dependency);
							}
						}
					}
				}
			}
		}
		parser = null;
		in = null;
		myAst = null;
		ast = null;
		return "";
	}
	
	public String testFunctions() {
		StringBuilder sb = new StringBuilder();
		for (Entry<String, FunctionMetrics> functionMetrics : functionMetricsMap.entrySet()) {
			sb.append(functionMetrics.getValue().toString());
			sb.append("\n");
		}
		return sb.toString().trim();
	}
	
	public String testDependencies() {
		StringBuilder sb = new StringBuilder();
		for (Dependency dependency : dependencies) {
			sb.append(dependency.toString());
			sb.append("\n");
		}
		return sb.toString().trim();
	}
	
	public String testUniqueDependencies() {
		Set<String> uniqueDependencies = new HashSet<String>();
		StringBuilder sb = new StringBuilder();
		for (Dependency dependency : dependencies) {
			if (!uniqueDependencies.contains(dependency.getUniqueName())) {
				uniqueDependencies.add(dependency.getUniqueName());
				sb.append(dependency.toString());
				sb.append("\n");
			}
		}
		return sb.toString().trim();
	}
	
}
