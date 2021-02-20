#include <stdio.h>

int main(int argc, char *argv[]){
	char *a_word = "flambert mcgee";
	int i;
	for(i = 0; i < sizeof(a_word) / sizeof(char); i++){
		printf("%c\n", a_word[i]);
	}	
}

