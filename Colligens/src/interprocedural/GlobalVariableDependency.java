package interprocedural;

import tree.Id;
import de.fosd.typechef.featureexpr.FeatureExpr;

public class GlobalVariableDependency extends Dependency {
	private Id globalVariableDeclaration;


	public GlobalVariableDependency(Function function,
			FeatureExpr presenceCondition, FeatureExpr innerPresenceCondition,
			FeatureExpr outerPresenceCondition, Id variable, Id globalVariableDeclaration) {
		super(function, presenceCondition, innerPresenceCondition,
				outerPresenceCondition, variable);
		this.globalVariableDeclaration = globalVariableDeclaration;
	}

	public Id getGlobalVariableDeclaration() {
		return globalVariableDeclaration;
	}
	
	public String getOuterFile() {
		return this.globalVariableDeclaration.getPositionFrom().getFile().substring(5);
	}
	
	public String getOuterPosition() {
		return this.globalVariableDeclaration.getPositionFrom().getLine() + ":" + this.globalVariableDeclaration.getPositionFrom().getColumn();
	}
	
}
