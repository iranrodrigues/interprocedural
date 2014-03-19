package interprocedural.core;

import java.util.ArrayList;
import java.util.List;

import tree.AtomicNamedDeclarator;
import tree.FunctionCall;
import tree.FunctionDef;
import tree.Id;
import tree.Opt;

public class Function {
	private FunctionDef functionDef;
	private String name;
	private List<Id> parameters;
	private List<FunctionCall> functionCalls = new ArrayList<FunctionCall>();
	private List<Opt> directives;
	
	public Function(FunctionDef functionDef/*, List<Id> parameters*/) {
		this.functionDef = functionDef;
		//this.parameters = parameters;
		this.name = findName();
	}
	
	public String findName() {
		for (int i = 0; i < functionDef.getChildren().size(); i++) {
			if (functionDef.getChildren().get(i) instanceof AtomicNamedDeclarator) {
				for (int j = 0; j < functionDef.getChildren().get(i).getChildren().size(); j++) {
					if (functionDef.getChildren().get(i).getChildren().get(j) instanceof Id) {
						return (((Id) functionDef.getChildren().get(i).getChildren().get(j)).getName());
					}
				}
			}
		}
		return "";
	}

	public FunctionDef getFunctionDef() {
		return functionDef;
	}

	public String getName() {
		return name;
	}

	public List<Id> getParameters() {
		return parameters;
	}
	
	public List<FunctionCall> getFunctionCalls() {
		return functionCalls;
	} 
	
	public void setFunctionCalls(List<FunctionCall> functionCalls) {
		this.functionCalls = functionCalls;
	}
	
	public List<Opt> getDirectives() {
		return directives;
	} 
	
	public void setDirectives(List<Opt> directives) {
		this.directives = directives;
	}
}
