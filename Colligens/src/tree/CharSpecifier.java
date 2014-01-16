package tree;

import tree.visitor.Visitor;

public class CharSpecifier extends Node {

	@Override
	public void accept(Visitor visitor) {
		visitor.run(this);
	}

}
