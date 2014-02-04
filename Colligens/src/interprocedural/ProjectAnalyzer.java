package interprocedural;

import java.io.File;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

import de.fosd.typechef.lexer.options.OptionException;

public class ProjectAnalyzer {
	
	private Map<String, List<Dependency>> dependenciesMap = new HashMap<String, List<Dependency>>();
	private Map<String, Map<String, FunctionMetrics>> functionMetricsMap = new HashMap<String, Map<String, FunctionMetrics>>();
	private String stubsPath;
	
	public ProjectAnalyzer(String stubsPath) {
		this.stubsPath = stubsPath;
	}

	public Map<String, List<Dependency>> getDependenciesMap() {
		return dependenciesMap;
	}

	public Map<String, Map<String, FunctionMetrics>> getFunctionMetricsMap() {
		return functionMetricsMap;
	}	
	
	public String getStubsPath() {
		return stubsPath;
	}

	public static void main(String[] args) {
		ProjectAnalyzer projectAnalyzer = new ProjectAnalyzer("interprocedural\\libssh0.5.3\\include\\stubs.h");
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/agent.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/auth.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/auth1.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/base64.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/bind.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/buffer.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/callbacks.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/channels.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/channels1.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/client.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/config.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/connect.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/crc32.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/crypt.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/dh.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/error.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/gcrypt_missing.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/getpass.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/gzip.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/init.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/kex.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/keyfiles.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/keys.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/known_hosts.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/legacy.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/libcrypto.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/libgcrypt.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/log.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/match.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/messages.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/misc.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/options.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/packet.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/packet1.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/pcap.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/pki.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/poll.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/scp.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/server.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/session.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/sftp.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/sftpserver.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/socket.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/string.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/threads.c"));
		projectAnalyzer.getFiles(new File("interprocedural/libssh0.5.3/analysis/src/wrapper.c"));
		
		System.out.println("Functions:");
		for (Entry<String, Map<String, FunctionMetrics>> functionMetricsMap : projectAnalyzer.getFunctionMetricsMap().entrySet()) {
			for (Entry<String, FunctionMetrics> functionMetrics : functionMetricsMap.getValue().entrySet()) {
				System.out.println(functionMetricsMap.getKey() + ";" + functionMetrics.getValue());
			}
		}
		System.out.println("All dependencies:");
		for (Entry<String, List<Dependency>> dependencyList : projectAnalyzer.getDependenciesMap().entrySet()) {
			for (Dependency dependency : dependencyList.getValue()) {
				System.out.println(dependencyList.getKey() + ";" + dependency);
			}
		}
		System.out.println("Unique dependencies:");
		for (Entry<String, List<Dependency>> dependencyList : projectAnalyzer.getDependenciesMap().entrySet()) {
			Set<String> uniqueDependencies = new HashSet<String>();
			for (Dependency dependency : dependencyList.getValue()) {
				if (!uniqueDependencies.contains(dependency.getUniqueName())) {
					uniqueDependencies.add(dependency.getUniqueName());
					System.out.println(dependencyList.getKey() + ";" + dependency);
				}
			}
		}
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

		TestInterProcedural testInterProcedural = new TestInterProcedural(file.getPath(), this.getStubsPath());

		try {
			testInterProcedural.refactorCode();
			getDependenciesMap().put(testInterProcedural.getFilePath(), testInterProcedural.getDependencies());
			getFunctionMetricsMap().put(testInterProcedural.getFilePath(), testInterProcedural.getFunctionMetricsMap());
		} catch (OptionException e) {
			e.printStackTrace();
		}
	}

}
