package interprocedural;

import static org.junit.Assert.*;

import org.junit.Test;

import de.fosd.typechef.lexer.options.OptionException;

public class TestInterJunit {

	// Global to global dependency (not interprocedural)
	@Test
	public void test1a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test1.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;1;0;1;1;0;true\n" + 
				"bar;0;0;1;1;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test1b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test1.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Mandatory<->Optional;GlobalVariableDependency;def(B);True;def(B);foo;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test1.c;1:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test1.c;9:8\n" + 
				"Mandatory<->Optional;GlobalVariableDependency;def(A);True;def(A);bar;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test1.c;1:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test1.c;16:8",
				m.testDependencies());
	}
	
	// No dependencies (function parameter not referenced, local variable override)
	@Test
	public void test2a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test2.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;1;0;0;0;1;true\n" + 
				"bar;0;0;0;0;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test2b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test2.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"",
				m.testDependencies());
	}
	
	// One global variable dependency and one function call dependency on the same statement
	@Test
	public void test3a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test3.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;1;1;1;2;1;true\n" + 
				"bar;0;0;0;0;0;false",
				m.testFunctions());
	}
	
	@Test
	public void test3b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test3.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Mandatory<->Optional;GlobalVariableDependency;def(A);True;def(A);foo;a;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test3.c;1:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test3.c;6:11\n" + 
				"Mandatory<->Optional;FunctionCallDependency;def(A);True;def(A);foo;c;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test3.c;12:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test3.c;6:7",
				m.testDependencies());
	}
	
	// Parameter override when def(B)
	@Test
	public void test4a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test4.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;0;0;0;0;0;true\n" + 
				"bar;1;1;0;2;2;true",
				m.testFunctions());
	}
	
	@Test
	public void test4b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test4.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals( 
				"Optional<->Optional;FunctionCallDependency;(!def(B)&def(D)&def(A)&!def(C));def(A);(!def(B)&def(D));bar;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test4.c;3:5;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test4.c;19:8\n" + 
				"Optional<->Optional;FunctionCallDependency;(!def(B)&def(D)&!def(A)&!def(C));!def(A);(!def(B)&def(D));bar;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test4.c;5:8;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test4.c;19:8",
				m.testDependencies());
	}
	
	// Same as test4, but with no parameter override
	@Test
	public void test5a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test5.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;0;0;0;0;0;true\n" + 
				"bar;1;1;0;2;2;true",
				m.testFunctions());
	}
	
	@Test
	public void test5b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test5.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals( 
				"Optional<->Optional;FunctionCallDependency;(def(C)&def(A)&def(B));def(B);(def(C)&def(A));bar;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test5.c;3:5;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test5.c;13:8\n" + 
				"Optional<->Optional;FunctionCallDependency;(def(C)&def(A)&!def(B));!def(B);(def(C)&def(A));bar;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test5.c;5:8;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test5.c;13:8",
				m.testDependencies());
	}
	
	// If-elif-else
	@Test
	public void test6a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;1;1;0;4;1;true\n" + 
				"bar;1;0;0;0;0;false",
				m.testFunctions());
	}
	
	@Test
	public void test6b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals( 
				"Mandatory<->Optional;FunctionCallDependency;def(A);True;def(A);foo;x;true;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c;16:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c;3:2\n" + 
				"Mandatory<->Optional;FunctionCallDependency;(def(B)&!def(A));True;(def(B)&!def(A));foo;x;true;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c;16:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c;3:2\n" + 
				"Mandatory<->Optional;FunctionCallDependency;(!def(A)&!def(B));True;(!def(A)&!def(B));foo;x;true;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c;16:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c;3:2\n" + 
				"Mandatory<->Optional;FunctionCallDependency;def(C);True;def(C);foo;x;true;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c;16:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test6.c;11:2",
				m.testDependencies());
	}
	
	// If-elif with call() triggers a bug in TypeChef
	@Test
	public void test7a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test7.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;1;1;0;2;1;true\n" + 
				"bar;1;0;0;0;0;false",
				m.testFunctions());
	}
	
	@Test
	public void test7b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test7.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals( 
				"Mandatory<->Optional;FunctionCallDependency;def(A);True;def(A);foo;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test7.c;11:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test7.c;3:7\n" + 
				"Mandatory<->Optional;FunctionCallDependency;(!def(A)&def(B));True;(!def(A)&def(B));foo;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test7.c;11:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test7.c;5:7",
				m.testDependencies());
	}
	
	// Lots of functions
	@Test
	public void test8a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test8.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"function11;0;0;0;0;0;false\n" + 
				"function12;0;0;0;0;0;false\n" + 
				"function8;0;0;0;0;0;true\n" + 
				"function9;0;0;0;0;0;true\n" + 
				"function7;0;0;0;0;0;false\n" + 
				"function6;1;0;0;0;0;false\n" + 
				"function5;1;0;0;0;0;false\n" + 
				"function4;1;0;0;0;0;false\n" + 
				"function3;1;0;0;0;0;false\n" + 
				"function2;0;0;0;0;0;false\n" + 
				"function1;0;0;0;0;0;false\n" + 
				"function10;1;0;0;0;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test8b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test8.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"",
				m.testDependencies());
	}
	
	// Struct with variable of same name as a global
	@Test
	public void test9a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test9.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;0;0;0;0;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test9b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test9.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"",
				m.testDependencies());
	}
	
	// Pointers
	@Test
	public void test10a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test10.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;0;0;2;2;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test10b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test10.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Mandatory<->Optional;GlobalVariableDependency;!def(A);True;!def(A);foo;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test10.c;1:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test10.c;11:6\n" + 
				"Mandatory<->Optional;GlobalVariableDependency;!def(A);True;!def(A);foo;y;true;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test10.c;2:5;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test10.c;9:1",
				m.testDependencies());
	}
	
	// Multiple global variable overrides
	@Test
	public void test11a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test11.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;1;0;1;1;0;true\n" + 
				"bar;1;0;0;0;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test11b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test11.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Mandatory<->Optional;GlobalVariableDependency;(!def(A)&!def(C)&!def(B)&def(D));True;(!def(B)&def(D));foo;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test11.c;1:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test11.c;16:8",
				m.testDependencies());
	}
	
	// Multiple parameters overrides
	@Test
	public void test12a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test12.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;1;1;0;1;1;true\n" + 
				"bar;1;1;0;1;1;true",
				m.testFunctions());
	}
	
	@Test
	public void test12b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test12.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Mandatory<->Optional;FunctionCallDependency;(!def(B)&def(D)&def(A)&!def(C));True;(!def(B)&def(D));foo;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test12.c;32:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test12.c;14:8\n" + 
				"Mandatory<->Optional;FunctionCallDependency;(!def(B)&def(D)&!def(C));True;(!def(B)&def(D));bar;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test12.c;17:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test12.c;29:8",
				m.testDependencies());
	}
	
	// Struct with part of its code inside a directive
	@Test
	public void test13a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test13.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;0;0;1;1;0;false",
				m.testFunctions());
	}
	
	@Test
	public void test13b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test13.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Optional<->Mandatory;GlobalVariableDependency;def(A);def(A);True;foo;x;true;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test13.c;3:5;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test13.c;10:3",
				m.testDependencies());
	}
	
	// Same as test9, but with typedef on struct
	@Test
	public void test14a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test14.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;0;0;0;0;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test14b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test14.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"",
				m.testDependencies());
	}
	
	// Same as test9, but the struct is also global
	@Test
	public void test15a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test15.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;0;0;1;1;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test15b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test15.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Mandatory<->Optional;GlobalVariableDependency;def(A);True;def(A);foo;a;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test15.c;7:18;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test15.c;11:1",
				m.testDependencies());
	}
	
	// Pointer modifying another variable content
	@Test
	public void test16a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test16.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foo;0;0;1;1;0;true",
				m.testFunctions());
	}
	
	@Test
	public void test16b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test16.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Mandatory<->Optional;GlobalVariableDependency;def(A);True;def(A);foo;a;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test15.c;7:18;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test15.c;11:1",
				m.testDependencies());
	}
	
	// Old C parameter declaration
	@Test
	public void test17a() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test17.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"foobar;1;1;0;1;1;true\n" + 
				"foo;0;0;0;0;0;false\n" + 
				"bar;2;1;0;1;1;true", 
				m.testFunctions());
	}
	
	@Test
	public void test17b() {
		TestInterProcedural m = new TestInterProcedural("C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test17.c");
		try {
			m.refactorCode();
		} catch (OptionException e) {
			e.printStackTrace();
		}

		assertEquals(
				"Mandatory<->Optional;FunctionCallDependency;def(A);True;def(A);foobar;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test17.c;4:7;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test17.c;18:6\n" + 
				"Mandatory<->Optional;FunctionCallDependency;def(A);True;def(A);bar;x;false;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test17.c;3:4;C:\\Users\\Iran\\Google Drive\\mestrado\\projeto\\interprocedural\\test17.c;12:6",
				m.testDependencies());
	}

}
