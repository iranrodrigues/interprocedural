package interprocedural;

import java.io.File;
import java.io.IOException;

import core.RefactoringType;
import de.fosd.typechef.lexer.options.OptionException;

public class ProjectAnalyzer {

	public static void main(String[] args) {
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/socket.c"));
		new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/auth.c"));
	}

	public void getFiles(File path) {
		if (path.isDirectory()) {
			for (File file : path.listFiles()) {
				this.getFiles(file);
			}
		} else {
			if (!path.getName().startsWith(".")) {
				if (path.getName().endsWith(".c")
						|| path.getName().endsWith(".h")) {
					System.out.println("FILE: " + path.getAbsolutePath());
					this.checkFile(path);
				}
			}
		}
	}

	public void checkFile(File file) {

		TestInterProcedural testInterProcedural = new TestInterProcedural();

		String textSelection = null;
		try {
			textSelection = testInterProcedural
					.readFile(file.getAbsolutePath());
		} catch (IOException e1) {
			e1.printStackTrace();
		}

		String stubsFilePath = "interprocedural/libssh0.5.3/include/stubs.h";

		try {
			testInterProcedural.refactorCode(textSelection, stubsFilePath,
					RefactoringType.REFACT_INCOMPLETESTMTS);
		} catch (OptionException e) {
			e.printStackTrace();
		}
	}

}
