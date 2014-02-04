package interprocedural;

import tree.AssignExpr;
import tree.Id;
import de.fosd.typechef.featureexpr.FeatureExpr;

public abstract class Dependency {
	private Function function;
	private FeatureExpr presenceCondition;
	private FeatureExpr innerPresenceCondition;
	private FeatureExpr outerPresenceCondition;
	private Id variable;
	
	public Dependency(Function function, FeatureExpr presenceCondition, FeatureExpr innerPresenceCondition, FeatureExpr outerPresenceCondition, Id variable) {
		this.function = function;
		this.presenceCondition = presenceCondition;
		this.innerPresenceCondition = innerPresenceCondition;
		this.outerPresenceCondition = outerPresenceCondition;
		this.variable = variable;
	}
	
	public Function getFunction() {
		return function;
	}
	
	public FeatureExpr getPresenceCondition() {
		return presenceCondition;
	}
	
	public FeatureExpr getInnerPresenceCondition() {
		return innerPresenceCondition;
	}
	
	public FeatureExpr getOuterPresenceCondition() {
		return outerPresenceCondition;
	}
	
	public Id getVariable() {
		return variable;
	}
	
	public String getDirection() {
		if (getOuterPresenceCondition().isTautology()) {
			return "Mandatory<->Optional";
		} else if (getInnerPresenceCondition().isTautology()) {
			return "Optional<->Mandatory";
		} else {
			return "Optional<->Optional";
		}
	}
	
	public boolean isLeftSideAssignment() {
		return (variable.getParent() instanceof AssignExpr);
	}
	
	public String getUniqueName() {
		return function.getName() + "/" + variable.getName();
	}
	
	public String getInnerFile() {
		return this.variable.getPositionFrom().getFile().substring(5);
	}
	
	public String getInnerPosition() {
		return this.variable.getPositionFrom().getLine() + ":" + this.variable.getPositionFrom().getColumn();
	}
	
	public abstract String getOuterFile();
	
	public abstract String getOuterPosition();
	
	public String toString() {
		return
			getDirection() + ";" +
			getClass().getSimpleName() + ";" +
			getPresenceCondition().toString() + ";" +
			getOuterPresenceCondition().toString() + ";" +
			getInnerPresenceCondition().toString() + ";" +
			getFunction().getName() + ";" +
			getVariable().getName() + ";" +
			isLeftSideAssignment() + ";" +
			getOuterFile() + ";" +
			getOuterPosition() + ";" +
			getInnerFile() + ";" +
			getInnerPosition();
	}
	
}
