#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <signal.h>

static void sigHandler(int sig){
	static int count = 0;
	
	count++;
	
	if(sig == SIGINT){
		printf("Caught SIGINT : %d\n", count);
	}
	else{
		printf("Caught SIGQUIT : %d\n", count);
	}
}
int main(int argc, char* argv[]){

	if(signal(SIGINT, sigHandler) == SIG_ERR){
	// signal regist fail
		printf("Error L signal(SIGINT)\n");
		exit(-1);
	}
	
	if(signal(SIGQUIT, sigHandler) == SIG_ERR){
		printf("Error : signal(SIGQUIT)\n");
		exit(-2);
	}
	
	while(1){
		pause();
		printf("Hello\n");
	}
	
	return 0;
}
