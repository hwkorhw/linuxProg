#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	execl("./a","a",NULL);
	execl("./b","b",NULL);

	return 0;
}
