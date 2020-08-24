#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

#define STR_SIZE 100

int main(int srgc, char *argv[]){
	int ch;

	while((ch = getchar()) != EOF)
		putchar(toupper((char)ch));

	exit(0);
}
