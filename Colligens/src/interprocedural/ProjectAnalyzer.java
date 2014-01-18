package interprocedural;

import java.io.File;
import java.io.IOException;

import core.RefactoringType;
import de.fosd.typechef.lexer.options.OptionException;

public class ProjectAnalyzer {

	public static void main(String[] args) {
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/agent.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/auth.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/auth1.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/base64.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/bind.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/buffer.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/callbacks.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/channels.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/channels1.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/client.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/config.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/connect.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/crc32.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/crypt.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/dh.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/error.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/gcrypt_missing.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/getpass.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/gzip.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/init.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/kex.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/keyfiles.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/keys.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/known_hosts.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/legacy.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/libcrypto.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/libgcrypt.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/log.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/match.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/messages.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/misc.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/options.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/packet.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/packet1.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/pcap.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/pki.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/poll.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/scp.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/server.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/session.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/sftp.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/sftpserver.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/socket.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/string.c"));
		//new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/threads.c"));
		new ProjectAnalyzer().getFiles(new File("interprocedural/libssh0.5.3/analysis/src/wrapper.c"));

		
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
			System.out.println("------------------------------------------------");
			System.out.println("File: " + file.getPath());
			System.out.println("Number of functions: " + testInterProcedural.getTotalFunctions());
			System.out.println("Number of dependencies: " + testInterProcedural.getTotalDependencies());
			System.out.println("Number of functions with dependencies: " + testInterProcedural.getFunctionsWithDependencies().size());
			if (testInterProcedural.getTotalFunctions() > 0) {
				System.out.println("% of functions with dependencies: " + ((float) testInterProcedural.getFunctionsWithDependencies().size() / (float) testInterProcedural.getTotalFunctions()) * 100 + "%");
			} else {
				System.out.println("% of functions with dependencies: 0%");
			}
			if (testInterProcedural.getFunctionsWithDependencies().size() > 0) {
				System.out.println("Average dependencies per function (which has dependencies): " + ((float) testInterProcedural.getTotalDependencies() / (float) testInterProcedural.getFunctionsWithDependencies().size()));
			} else {
				System.out.println("Average dependencies per function (which has dependencies): 0");
			}
		} catch (OptionException e) {
			e.printStackTrace();
		}
	}

}
