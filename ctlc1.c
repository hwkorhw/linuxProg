#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int i = 0;

void sigHandler(int sig){
	i++;
	printf("OUCH! - I got signal %d\n", sig);
	if(i > 2)
		(void)signal(SIGINT, SIG_DFL);
}

int main() {
	signal(SIGINT, sigHandler);

	while(1){
		printf("Hello World!\n");
		sleep(1);
	}

	return 0;
}
