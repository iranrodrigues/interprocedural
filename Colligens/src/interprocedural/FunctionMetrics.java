package interprocedural;

import java.util.HashSet;
import java.util.Set;

public class FunctionMetrics {
	private Function function;
	private Set<Dependency> dependencies = new HashSet<Dependency>();
	
	public FunctionMetrics(Function function) {
		this.function = function;
	}

	public Function getFunction() {
		return function;
	}
	
	public Set<Dependency> getDependencies() {
		return dependencies;
	}
	
	public Set<String> getDependentParameters() {
		Set<String> dependentParameters = new HashSet<String>();
		for (Dependency dependency : dependencies) {
			if (dependency instanceof FunctionCallDependency) {
				dependentParameters.add(dependency.getVariable().getName());
			}
		}
		return dependentParameters;
	}
	
	public Set<String> getDependentGlobalVariables() {
		Set<String> dependentGlobalVariables = new HashSet<String>();
		for (Dependency dependency : dependencies) {
			if (dependency instanceof GlobalVariableDependency) {
				dependentGlobalVariables.add(dependency.getVariable().getName());
			}
		}
		return dependentGlobalVariables;
	}
	
	public String toString() {
		return 
			getFunction().getName() + ";" +
			getFunction().getParameters().size() + ";" +
			getDependentParameters().size() + ";" +
			getDependentGlobalVariables().size() + ";" +
			getDependencies().size() + ";" +
			getFunction().getFunctionCalls().size();
	}
	
}
