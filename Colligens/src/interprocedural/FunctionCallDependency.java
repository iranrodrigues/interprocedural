package interprocedural;

import de.fosd.typechef.featureexpr.FeatureExpr;
import tree.FunctionCall;
import tree.Id;

public class FunctionCallDependency extends Dependency {
	private FunctionCall functionCall;

	public FunctionCallDependency(Function function,
			FeatureExpr presenceCondition, FeatureExpr innerPresenceCondition,
			FeatureExpr outerPresenceCondition, Id variable, FunctionCall functionCall) {
		super(function, presenceCondition, innerPresenceCondition,
				outerPresenceCondition, variable);
		this.functionCall = functionCall;
	}

	public FunctionCall getFunctionCall() {
		return functionCall;
	}
	
	public String getOuterFile() {
		return this.functionCall.getPositionFrom().getFile().substring(5);
	}
	
	public String getOuterPosition() {
		return this.functionCall.getPositionFrom().getLine() + ":" + this.functionCall.getPositionFrom().getColumn();
	}
	
}
