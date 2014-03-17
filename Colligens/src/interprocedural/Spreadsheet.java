package interprocedural;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;

import jxl.Workbook;
import jxl.write.Label;
import jxl.write.Number;
import jxl.write.NumberFormats;
import jxl.write.WritableCellFormat;
import jxl.write.WritableSheet;
import jxl.write.WritableWorkbook;
import jxl.write.WriteException;
import jxl.write.biff.RowsExceededException;

public class Spreadsheet {
	
	WritableCellFormat floatPercentage = new WritableCellFormat(NumberFormats.PERCENT_FLOAT);
	ProjectAnalyzer projectAnalyzer;

	public Spreadsheet(ProjectAnalyzer projectAnalyzer) {
		this.projectAnalyzer = projectAnalyzer;
	}

	public void createSpreadsheet(String fileName) {
		try {
			Map<String, Map<String, FunctionMetrics>> functionMetricsMapMap = this.projectAnalyzer.getFunctionMetricsMap();
			Map<String, List<Dependency>> dependenciesMap = this.projectAnalyzer.getDependenciesMap();
			int analyzedFileCount = this.projectAnalyzer.getAnalyzedFileCount(); 
			
			// Create file
			WritableWorkbook workbook = Workbook.createWorkbook(new File(fileName));			
			createSheetFunctions(workbook, functionMetricsMapMap);
			createSheetAllDependencies(workbook, dependenciesMap);
			createSheetSummary(workbook, functionMetricsMapMap, dependenciesMap, analyzedFileCount);
			//createSheetUniqueDependencies(workbook, dependenciesMap);
			//createSheetUniqueDependenciesSummary(workbook, dependenciesMap);
			
			workbook.write();
			workbook.close();
			System.out.println("Spreadsheet created.");
		} catch (FileNotFoundException e) {
			System.out.println("Error: " + e.getMessage());
		} catch (IOException e) {
			e.printStackTrace();
		} catch (RowsExceededException e) {
			e.printStackTrace();
		} catch (WriteException e) {
			e.printStackTrace();
		}
	}
	
	public void createSheetFunctions(WritableWorkbook workbook, Map<String, Map<String, FunctionMetrics>> functionMetricsMapMap) {
		WritableSheet sheet = workbook.createSheet("Functions", 0);

		// Inserting header
		String[] headers = {"FILE", "FUNCTION", "PARAMETERS", "DEPENDENT_PARAMETERS", "DEPENDENT_GLOBAL_VARIABLES", "DEPENDENCIES", "CALLS", "%_OF_PARAMS_WITH_DEPENDENCY", "HAS_DIRECTIVES"};
		for (int i = 0; i < headers.length; i++) {
			try {
				sheet.addCell(new Label(i, 0, headers[i]));
			} catch (RowsExceededException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (WriteException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		int i = 1;
		try {
			for (Entry<String, Map<String, FunctionMetrics>> functionMetricsMap : functionMetricsMapMap.entrySet()) {
				for (Entry<String, FunctionMetrics> functionMetrics : functionMetricsMap.getValue().entrySet()) {
					String[] data = (functionMetricsMap.getKey() + ";" + functionMetrics.getValue()).split(";");
					for (int j = 0; j < data.length; j++) {
						if (j < 2) {
							sheet.addCell(new Label(j, i, data[j]));
						} else if (j == 7) { // HAS_DIRECTIVES?
							sheet.addCell(new Label(8, i, data[j]));
						} else {
							sheet.addCell(new Number(j, i, Integer.parseInt(data[j])));
						}
					}
					// Dependent parameters / parameters
					//sheet.addCell(new Formula(7, i, "IF(C" + (i + 1) + "=0,0,D" + (i + 1) + "/C" + (i + 1) + ")*100"));
					if (functionMetrics.getValue().getFunction().getParameters().size() != 0) {
						sheet.addCell(new Number(7, i, (double)functionMetrics.getValue().getDependentParameters().size()/(double)functionMetrics.getValue().getFunction().getParameters().size(), this.floatPercentage));
					} else {
						sheet.addCell(new Number(7, i, 0, this.floatPercentage));
					}
					i++;
				}
			}
		} catch (RowsExceededException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (WriteException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	public void createSheetAllDependencies(WritableWorkbook workbook, Map<String, List<Dependency>> dependenciesMap) {
		WritableSheet sheet = workbook.createSheet("Dependencies", 1);

		// Inserting header
		String[] headers = {"FILE", "DIRECTION", "TYPE", "PRESENCE_CONDITION", "OUTER_PRESENCE_CONDITION", "INNER_PRESENCE_CONDITION", "FUNCTION", "VARIABLE", "IS_ASSIGNMENT", "OUTER_FILENAME", "OUTER_POSITION", "INNER_FILENAME", "INNER_POSITION"};
		for (int i = 0; i < headers.length; i++) {
			try {
				sheet.addCell(new Label(i, 0, headers[i]));
			} catch (RowsExceededException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (WriteException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		int i = 1;
		try {
			for (Entry<String, List<Dependency>> dependenciesList : dependenciesMap.entrySet()) {
				for (Dependency dependency : dependenciesList.getValue()) {
					String[] data = (dependenciesList.getKey() + ";" + dependency).split(";");
					for (int j = 0; j < data.length; j++) {
						sheet.addCell(new Label(j, i, data[j]));
					}
					i++;
				}
			}
		} catch (RowsExceededException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (WriteException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	public void createSheetSummary(WritableWorkbook workbook, Map<String, Map<String, FunctionMetrics>> functionMetricsMapMap, Map<String, List<Dependency>> dependenciesMap, int analyzedFiles) {
		WritableSheet sheet = workbook.createSheet("Summary", 2);
		int line = 0;
		// Inserting header
		String[] headers = {"Total of dependencies:", "", "Total of files:",
				"Total of analyzed files:", "% of analyzed files:",
				"Total of analyzed files with dependencies:", "% of analyzed files with dependencies:",
				"Average dependencies per file:",
				"Average dependencies per file which has dependencies:",
				"Maximum dependency count on a single file:", "",
				"Total of functions:", "Total of functions with directives:",
				"Total of functions with dependencies:", "% of functions with directives:",
				"% of functions with dependencies:", "% of functions with directives which has dependencies:",
				"Average dependencies per function:",
				"Average dependencies per function which has dependencies:",
				"Maximum dependency count on a single function:", "", "Total of functions called:",
				"% of functions called:", "Total of function calls:",
				"Total of function calls for functions with dependencies:", "Average calls per function:",
				"Average calls per function which has dependencies:", "",
				"Total of function parameters:", 
				"Total of function parameters for functions with dependencies:",
				"Total of dependent function parameters:",
				"Average dependent parameters per function:",
				"Average dependent parameters per function which has dependencies:",
				"Average dependent parameters per function which has dependent parameters:", "",
				"Dependencies by direction", "Mandatory->Optional:", "Optional->Mandatory:",
				"Optional->Optional:",	"", "Dependencies by type", "Global Variable Dependency:",
				"Function Call Dependency:", "",
				"Use/assignment", "Assignment", "Use"};
		
		int dependencyCount = 0;
		int maxDependencyCountSingleFile = 0;
		int filesWithDependency = 0;
		String maxDependencyCountSingleFileName = null;
		int dependencyDirectionMOCount = 0;
		int dependencyDirectionOMCount = 0;
		int dependencyDirectionOOCount = 0;
		int dependencyTypeGlobalCount = 0;
		int dependencyTypeFunctionCount = 0;
		int dependencyLSACount = 0;
		
		for (Entry<String, List<Dependency>> dependenciesList : dependenciesMap.entrySet()) {
			int dependencyCountSingleFile = 0;
			for (Dependency dependency : dependenciesList.getValue()) {
				dependencyCount++;
				if (dependencyCountSingleFile == 0) {
					filesWithDependency++;
				}
				dependencyCountSingleFile++;
				switch (dependency.getDirection()) {
				case "Mandatory<->Optional":
					dependencyDirectionMOCount++;
					break;
				case "Optional<->Mandatory":
					dependencyDirectionOMCount++;
					break;
				case "Optional<->Optional":
					dependencyDirectionOOCount++;
					break;
				}
				if (dependency instanceof GlobalVariableDependency) {
					dependencyTypeGlobalCount++;
				} else if (dependency instanceof FunctionCallDependency) {
					dependencyTypeFunctionCount++;
				}
				if (dependency.isLeftSideAssignment()) {
					dependencyLSACount++;
				}
			}
			if (dependencyCountSingleFile > maxDependencyCountSingleFile) {
				maxDependencyCountSingleFile = dependencyCountSingleFile;
				maxDependencyCountSingleFileName = dependenciesList.getKey();
			}
		}
		
		int functionCount = 0;
		int functionWithDirectiveCount = 0;
		int functionWithDependencyCount = 0;
		int maxDependencyCountSingleFunction = 0;
		String maxDependencyCountSingleFunctionName = null;
		String maxDependencyCountSingleFunctionFileName = null;
		int functionCallCount = 0;
		int functionWithDependencyCallCount = 0;
		int parameterCount = 0;
		int parameterOfFunctionWithDependencyCount = 0;
		int dependentParameterCount = 0;
		int functionWithDependentParameterCount = 0;
		int functionCalledCount = 0;
		
		for (Entry<String, Map<String, FunctionMetrics>> functionMetricsMap : functionMetricsMapMap.entrySet()) {
			for (Entry<String, FunctionMetrics> functionMetrics : functionMetricsMap.getValue().entrySet()) {
				int dependencyCountSingleFunction = 0;
				functionCount++;
				functionCallCount += functionMetrics.getValue().getFunction().getFunctionCalls().size();
				parameterCount += functionMetrics.getValue().getFunction().getParameters().size();
				if (functionMetrics.getValue().getFunction().getDirectives().size() > 0) {
					functionWithDirectiveCount++;
				}
				if (functionMetrics.getValue().getDependencies().size() > 0) {
					functionWithDependencyCount++;
					dependencyCountSingleFunction += functionMetrics.getValue().getDependencies().size();
					functionWithDependencyCallCount += functionMetrics.getValue().getFunction().getFunctionCalls().size();
					parameterOfFunctionWithDependencyCount += functionMetrics.getValue().getFunction().getParameters().size();
					dependentParameterCount += functionMetrics.getValue().getDependentParameters().size();
					if (functionMetrics.getValue().getDependentParameters().size() > 0) {
						functionWithDependentParameterCount++;
					}
				}
				if (functionMetrics.getValue().getFunction().getFunctionCalls().size() > 0) {
					functionCalledCount++;
				}
				if (dependencyCountSingleFunction > maxDependencyCountSingleFunction) {
					maxDependencyCountSingleFunction = dependencyCountSingleFunction;
					maxDependencyCountSingleFunctionName = functionMetrics.getKey();
					maxDependencyCountSingleFunctionFileName = functionMetricsMap.getKey();
				}
			}
		}
		
		for (int i = 0; i < headers.length; i++) {
			try {
				sheet.addCell(new Label(0, i, headers[i]));
			} catch (RowsExceededException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (WriteException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		try {
			// Total of dependencies
			sheet.addCell(new Number(1, line++, dependencyCount));
			// Total of files
			line++;
			sheet.addCell(new Number(1, line++, analyzedFiles));
			// Total of analyzed files
			sheet.addCell(new Number(1, line++, dependenciesMap.size()));
			// % of analyzed files
			if (analyzedFiles != 0) { 
				sheet.addCell(new Number(1, line++, (double)dependenciesMap.size()/(double)analyzedFiles, this.floatPercentage));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Total of analyzed files with dependencies
			sheet.addCell(new Number(1, line++, filesWithDependency));
			// % of analyzed files with dependencies
			if (dependenciesMap.size() != 0) {
				sheet.addCell(new Number(1, line++, (double)filesWithDependency/(double)dependenciesMap.size(), this.floatPercentage));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Average dependencies per file
			if (dependenciesMap.size() != 0) { 
				sheet.addCell(new Number(1, line++, (double)dependencyCount/(double)dependenciesMap.size()));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Average dependencies per file which has dependencies
			if (filesWithDependency != 0) { 
				sheet.addCell(new Number(1, line++, (double)dependencyCount/(double)filesWithDependency));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Max dependency count on a single file
			sheet.addCell(new Number(1, line, maxDependencyCountSingleFile));
			sheet.addCell(new Label(2, line, "File:"));
			sheet.addCell(new Label(3, line++, maxDependencyCountSingleFileName));
			// Total of functions
			line++;
			sheet.addCell(new Number(1, line++, functionCount));
			// Total of functions with directives
			sheet.addCell(new Number(1, line++, functionWithDirectiveCount));
			// Total of functions with dependencies
			sheet.addCell(new Number(1, line++, functionWithDependencyCount));
			// % of functions with directives
			if (functionCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)functionWithDirectiveCount/(double)functionCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// % of functions with dependencies
			if (functionCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)functionWithDependencyCount/(double)functionCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// % of functions with directives which has dependencies
			if (functionWithDirectiveCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)functionWithDependencyCount/(double)functionWithDirectiveCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Average dependencies per function
			if (functionCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)dependencyCount/(double)functionCount));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Average dependencies per function which has dependencies
			if (functionWithDependencyCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)dependencyCount/(double)functionWithDependencyCount));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Max dependency count on a single function
			sheet.addCell(new Number(1, line, maxDependencyCountSingleFunction));
			sheet.addCell(new Label(2, line, "Function:"));
			sheet.addCell(new Label(3, line, maxDependencyCountSingleFunctionName));
			sheet.addCell(new Label(4, line, "File:"));
			sheet.addCell(new Label(5, line++, maxDependencyCountSingleFunctionFileName));
			// Total functions called
			line++;
			sheet.addCell(new Number(1, line++, functionCalledCount));
			// % of functions called
			if (functionCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)functionCalledCount/(double)functionCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Total function calls
			sheet.addCell(new Number(1, line++, functionCallCount));
			// Total function calls for functions with dependencies
			sheet.addCell(new Number(1, line++, functionWithDependencyCallCount));
			// Average calls per function
			if (functionCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)functionCallCount/(double)functionCount));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Average calls per function which has dependencies
			if (functionWithDependencyCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)functionWithDependencyCallCount/(double)functionWithDependencyCount));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Total of function parameters
			line++;
			sheet.addCell(new Number(1, line++, parameterCount));
			// Total of function parameters for functions with dependencies
			sheet.addCell(new Number(1, line++, parameterOfFunctionWithDependencyCount));
			// Total of dependent function parameters
			sheet.addCell(new Number(1, line++, dependentParameterCount));
			// Average dependent parameters per function
			if (functionCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)dependentParameterCount/(double)functionCount));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Average dependent parameters per function which has dependencies
			if (functionWithDependencyCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)dependentParameterCount/(double)functionWithDependencyCount));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Average dependent parameters per function which has dependent parameters
			if (functionWithDependentParameterCount != 0) { 
				sheet.addCell(new Number(1, line++, (double)dependentParameterCount/(double)functionWithDependentParameterCount));
			} else {
				sheet.addCell(new Number(1, line++, 0));
			}
			// Dependencies by direction
			line++;
			sheet.addCell(new Label(1, line, "Total"));
			sheet.addCell(new Label(2, line++, "%"));
			sheet.addCell(new Number(1, line, dependencyDirectionMOCount));
			if (dependencyCount != 0) {
				sheet.addCell(new Number(2, line++, (double)dependencyDirectionMOCount/(double)dependencyCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(2, line++, 0, this.floatPercentage));
			}
			sheet.addCell(new Number(1, line, dependencyDirectionOMCount));
			if (dependencyCount != 0) {
				sheet.addCell(new Number(2, line++, (double)dependencyDirectionOMCount/(double)dependencyCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(2, line++, 0, this.floatPercentage));
			}
			sheet.addCell(new Number(1, line, dependencyDirectionOOCount));
			if (dependencyCount != 0) {
				sheet.addCell(new Number(2, line++, (double)dependencyDirectionOOCount/(double)dependencyCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(2, line++, 0, this.floatPercentage));
			}
			// Dependencies by type
			line++;
			sheet.addCell(new Label(1, line, "Total"));
			sheet.addCell(new Label(2, line++, "%"));
			sheet.addCell(new Number(1, line, dependencyTypeGlobalCount));
			if (dependencyCount != 0) {
				sheet.addCell(new Number(2, line++, (double)dependencyTypeGlobalCount/(double)dependencyCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(2, line++, 0, this.floatPercentage));
			}
			sheet.addCell(new Number(1, line, dependencyTypeFunctionCount));
			if (dependencyCount != 0) {
				sheet.addCell(new Number(2, line++, (double)dependencyTypeFunctionCount/(double)dependencyCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(2, line++, 0, this.floatPercentage));
			}
			// Dependencies by side
			line++;
			sheet.addCell(new Label(1, line, "Total"));
			sheet.addCell(new Label(2, line++, "%"));
			sheet.addCell(new Number(1, line, dependencyLSACount));
			if (dependencyCount != 0) {
				sheet.addCell(new Number(2, line++, (double)dependencyLSACount/(double)dependencyCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(2, line++, 0, this.floatPercentage));
			}
			sheet.addCell(new Number(1, line, dependencyCount - dependencyLSACount));
			if (dependencyCount != 0) {
				sheet.addCell(new Number(2, line++, (double)(dependencyCount - dependencyLSACount)/(double)dependencyCount, this.floatPercentage));
			} else {
				sheet.addCell(new Number(2, line++, 0, this.floatPercentage));
			}
		} catch (RowsExceededException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (WriteException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	/*public void createSheetUniqueDependencies(WritableWorkbook workbook, Map<String, List<Dependency>> dependenciesMap) {
		WritableSheet sheet = workbook.createSheet("Unique dependencies", 4);

		// Inserting header
		String[] headers = {"FILE", "DIRECTION", "TYPE", "PRESENCE_CONDITION", "OUTER_PRESENCE_CONDITION", "INNER_PRESENCE_CONDITION", "FUNCTION", "VARIABLE"};
		for (int i = 0; i < headers.length; i++) {
			try {
				sheet.addCell(new Label(i, 0, headers[i]));
			} catch (RowsExceededException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			} catch (WriteException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		int i = 1;
		try {
			for (Entry<String, List<Dependency>> dependenciesList : dependenciesMap.entrySet()) {
				Set<String> uniqueDependencies = new HashSet<String>();
				for (Dependency dependency : dependenciesList.getValue()) {
					if (!uniqueDependencies.contains(dependency.getUniqueName())) {
						uniqueDependencies.add(dependency.getUniqueName());
						String[] data = (dependenciesList.getKey() + ";" + dependency).split(";");
						for (int j = 0; j < 8; j++) {
							sheet.addCell(new Label(j, i, data[j]));
						}
						i++;
					}
				}
			}
		} catch (RowsExceededException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (WriteException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	public void createSheetUniqueDependenciesSummary(WritableWorkbook workbook, Map<String, List<Dependency>> dependenciesMap) {
		WritableSheet sheet = workbook.createSheet("Unique dependencies summary", 5);
	}*/
}