#include <stdio.h>

int main(int argc, char *argv[]){
	char *a_word = "flambert";
	int i;
	for(i = 0; i < sizeof(a_word); i++){
		printf("%c\n", a_word[i]);
	}	
}

