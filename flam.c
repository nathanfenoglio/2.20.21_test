#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *a_word = "flambort mcflea";
	int i;
	for(i = 0; i < strlen(a_word); i++){
		printf("%c\n", a_word[i]);
	}

//leaving both print statements because it's ok
	printf("flam2\n");
	

	printf("flam1\n");	
}

