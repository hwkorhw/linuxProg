#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

void sigHandler(int sig){
	printf("Get signal number : %d\n", sig);
}

int main() {
	int status;
	pid_t pid;

	pid = fork();

	if(pid == 0){
		printf("Start Child process : %d\n", getpid());
		execl("./hello","hello",NULL);
	}
}