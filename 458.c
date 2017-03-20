#include <stdio.h>
#include <string.h>


int main(void){

	char c;

	while( (c = getchar()) != EOF){
		if(c == '\n')
			printf("%c", c);
		else
			printf("%c", c - 7);
	}

	return 0;

}

/*#include <stdio.h>
#include <string.h>


int main(void){

	char input[1000];
	int i;

	while( scanf("%s", input) != EOF){
		for(i = 0; i < strlen(input); i++)
			printf("%c", input[i] - 7);
		printf("\n");
	}

	return 0;

}