package interprocedural;

import java.io.File;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import de.fosd.typechef.lexer.options.OptionException;

public class ProjectAnalyzer {
	
	private Map<String, List<Dependency>> dependenciesMap = new HashMap<String, List<Dependency>>();
	private Map<String, Map<String, FunctionMetrics>> functionMetricsMapMap = new HashMap<String, Map<String, FunctionMetrics>>();
	private String stubsPath;
	private int analyzedFileCount = 0;
	
	public ProjectAnalyzer(String stubsPath) {
		this.stubsPath = stubsPath;
	}

	public Map<String, List<Dependency>> getDependenciesMap() {
		return dependenciesMap;
	}

	public Map<String, Map<String, FunctionMetrics>> getFunctionMetricsMap() {
		return functionMetricsMapMap;
	}	
	
	public String getStubsPath() {
		return stubsPath;
	}
	
	public int getAnalyzedFileCount() {
		return analyzedFileCount;
	}

	public static void main(String[] args) {
		ProjectAnalyzer projectAnalyzer;
		Spreadsheet m;
		
		projectAnalyzer = new ProjectAnalyzer("interprocedural\\libssh0.5.3\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural\\libssh0.5.3\\analysis\\src\\"));
		m = new Spreadsheet(projectAnalyzer);
		m.createSpreadsheet("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\spreadsheets\\libssh.xls");
		
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

	public void getFiles(File path) {
		if (path.isDirectory()) {
			for (File file : path.listFiles()) {
				this.getFiles(file);
			}
		} else {
			if (!path.getName().startsWith(".")) {
				if (path.getName().endsWith(".c")) {
						//|| path.getName().endsWith(".h")) {
					System.out.println("FILE: " + path.getAbsolutePath());
					this.checkFile(path);
				}
			}
		}
	}

	public void checkFile(File file) {

		this.analyzedFileCount++;
		
		TestInterProcedural testInterProcedural = new TestInterProcedural(file.getPath(), this.getStubsPath());

		try {
			testInterProcedural.refactorCode();
			getDependenciesMap().put(testInterProcedural.getFilePath(), testInterProcedural.getDependencies());
			getFunctionMetricsMap().put(testInterProcedural.getFilePath(), testInterProcedural.getFunctionMetricsMap());
		} catch (OptionException e) {
			e.printStackTrace();
		}
	}

}
