package interprocedural;

import java.util.List;
import java.util.Set;

import tree.AtomicNamedDeclarator;
import tree.FunctionCall;
import tree.FunctionDef;
import tree.Id;
import tree.Opt;

public class Function {
	private FunctionDef functionDef;
	private String name;
	private Set<Id> parameters;
	private List<FunctionCall> functionCalls;
	private Set<Opt> directives;
	
	public Function(FunctionDef functionDef, Set<Id> parameters) {
		this.functionDef = functionDef;
		this.parameters = parameters;
		
		for (int i = 0; i < functionDef.getChildren().size(); i++) {
			if (functionDef.getChildren().get(i) instanceof AtomicNamedDeclarator) {
				for (int j = 0; j < functionDef.getChildren().get(i).getChildren().size(); j++) {
					if (functionDef.getChildren().get(i).getChildren().get(j) instanceof Id) {
						this.name = ((Id) functionDef.getChildren().get(i).getChildren().get(j)).getName();
					}
				}
			}
		}
	}

	public FunctionDef getFunctionDef() {
		return functionDef;
	}

	public String getName() {
		return name;
	}

	public Set<Id> getParameters() {
		return parameters;
	}
	
	public List<FunctionCall> getFunctionCalls() {
		return functionCalls;
	} 
	
	public void setFunctionCalls(List<FunctionCall> functionCalls) {
		this.functionCalls = functionCalls;
	}
	
	public Set<Opt> getDirectives() {
		return directives;
	} 
	
	public void setDirectives(Set<Opt> directives) {
		this.directives = directives;
	}
}
