package interprocedural.core;

import interprocedural.visitor.FindFunctionCallsVisitor;
import interprocedural.visitor.FindFunctionsVisitor;

import java.io.File;
import java.util.ArrayList;
import java.util.List;

import tree.FunctionCall;
import tree.FunctionDef;
import tree.Id;
import tree.Node;
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

public class ProjectScanner {

	private String stubsPath;
	private List<Function> functions = new ArrayList<Function>();
	
	public String getStubsPath() {
		return stubsPath;
	}

	public List<Function> getFunctions() {
		return functions;
	}

	public ProjectScanner(String stubsPath) {
		this.stubsPath = stubsPath;
	}

	public static void main(String[] args) {
		ProjectScanner projectScanner;
		//Spreadsheet m;
		projectScanner = new ProjectScanner("interprocedural\\gzip1.2.4\\include\\stubs.h");
		projectScanner.getFile(new File("interprocedural\\gzip1.2.4\\analysis\\"));
		
		for (Function function : projectScanner.getFunctions()) {
			System.out.println(function.getName() + " - " + function.getFunctionDef().getPositionFrom());
			for (FunctionCall functionCall : function.getFunctionCalls()) {
				System.out.println("\t" + functionCall.getPositionFrom());
			}
		}
		
		//m = new Spreadsheet(projectScanner);
		//m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\libssh.xls");
		
		/*projectAnalyzer = new ProjectAnalyzer("interprocedural\\lighttpd\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\lighttpd\\src"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\lighttpd.xls");*/
		
		/*projectAnalyzer = new ProjectAnalyzer("interprocedural\\sqlite\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\sqlite\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\sqlite.xls");
		
		projectAnalyzer = new ProjectAnalyzer("interprocedural\\apache\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\apache\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\apache.xls");
		*/
		/*projectAnalyzer = new ProjectAnalyzer("interprocedural\\clamav\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\clamav\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\clamav.xls");
		
		projectAnalyzer = new ProjectAnalyzer("interprocedural\\gzip1.2.4\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\gzip1.2.4\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\gzip.xls");
		*/
		/*projectAnalyzer = new ProjectAnalyzer("interprocedural\\ghostscript\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\ghostscript\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\ghostscript.xls");*/
		
		/*projectAnalyzer = new ProjectAnalyzer("interprocedural\\xterm2.9.1\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\xterm2.9.1\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\xterm.xls");
		
		projectAnalyzer = new ProjectAnalyzer("interprocedural\\bash2.01\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\bash2.01\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\bash.xls");
		
		projectAnalyzer = new ProjectAnalyzer("interprocedural\\berkeley\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\berkeley\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\berkeley.xls");*/
		
		/*projectAnalyzer = new ProjectAnalyzer("interprocedural\\cherokee\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\cherokee\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\cherokee.xls");*/
		
		/*projectAnalyzer = new ProjectAnalyzer("interprocedural\\bison2.0\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\bison2.0\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\bison.xls");
		
		projectAnalyzer = new ProjectAnalyzer("interprocedural\\lua\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\lua\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\lua.xls");
		*/
		/*projectAnalyzer = new ProjectAnalyzer("interprocedural\\sendmail\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\sendmail\\analysis"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\sendmail.xls");*/
	}

	public void getFile(File path) {
		if (path.isDirectory()) {
			for (File file : path.listFiles()) {
				this.getFile(file);
			}
		} else {
			if (!path.getName().startsWith(".")) {
				if (path.getName().endsWith(".c")) {
						//|| path.getName().endsWith(".h")) {
					System.out.println("FILE: " + path.getAbsolutePath());
					this.scanFile(path);
				}
			}
		}
	}

	public void scanFile(File file) {
		FrontendOptions myParserOptions = new FrontendOptionsWithConfigFiles();
		ArrayList<String> parameters = new ArrayList<String>();

		parameters.add("--lexNoStdout");
		parameters.add("-h");
		parameters.add(this.stubsPath);
		parameters.add(file.getPath());

		String[] parameterArray = parameters
				.toArray(new String[parameters.size()]);

		try {
			myParserOptions.parseOptions(parameterArray);
		} catch (OptionException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

		ParserMain parser = new ParserMain(new CParser(null, false));

		TokenReader<CToken, CTypeContext> in = Lex.lex(myParserOptions);

		AST ast = parser.parserMain(in, myParserOptions);
		Node myAst = new TranslationUnit();
		ASTGenerator astGenerator =	new ASTGenerator();
		astGenerator.generate(ast, myAst);
		VisitorASTOrganizer visitorASTOrganizer = new VisitorASTOrganizer();
		myAst.accept(visitorASTOrganizer);
		
		FindFunctionsVisitor findFunctionsVisitor = new FindFunctionsVisitor();
		myAst.accept(findFunctionsVisitor);
		List<FunctionDef> functionDefs = findFunctionsVisitor.getFunctions();
		
		for (FunctionDef functionDef : functionDefs) {
			if (functionDef.getPositionFrom().getFile().endsWith(".c")) {
				Function function = new Function(functionDef);
				this.functions.add(function);
			}
		}
		
		FindFunctionCallsVisitor findFunctionCallsVisitor = new FindFunctionCallsVisitor();
		myAst.accept(findFunctionCallsVisitor);
		List<FunctionCall> functionCalls = findFunctionCallsVisitor.getFunctionCalls();
		
		for (FunctionCall functionCall : functionCalls) {
			if (functionCall.getPositionFrom().getFile().endsWith(".c")) {
				for (Function function : this.functions) {
					if (function.getName().equals(((Id) functionCall.getParent().getChildren().get(0)).getName())) {
						function.getFunctionCalls().add(functionCall);
					}
				}
			}
		}
		
	}

}
