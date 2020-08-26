#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

// ./killTrans pid signalNumber

int main(int argc, char* argv[]){
	int sig, result;
	pid_t pid;
	pid = atoi(argv[1]);
	printf("pid : %d\n", pid);
	sig = atoi(argv[2]);
	printf("signal : %d\n", sig);
	
	result = kill(pid, sig);
	
	if(result == -1){
	// kill error
		printf("Error : kill()\n");
		exit(-1);
	}
	
	return 0;
}
