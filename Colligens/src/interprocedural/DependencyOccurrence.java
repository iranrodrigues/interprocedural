package interprocedural;

import tree.Id;
import de.fosd.typechef.featureexpr.FeatureExpr;

public class DependencyOccurrence {
	private FeatureExpr innerPresenceCondition;
	private Id id;
	
	public DependencyOccurrence(FeatureExpr innerPresenceCondition, Id id) {
		this.innerPresenceCondition = innerPresenceCondition;
		this.id = id;
	}

	public FeatureExpr getInnerPresenceCondition() {
		return innerPresenceCondition;
	}

	public Id getId() {
		return id;
	}
}
