#include <stdio.h>

int main(void){

	char c;

	int count = 0;

	while( (c = getchar()) != EOF){

		if(c == '"' && count == 0){
			printf("``");
			count = 1;
		}
		else if(c == '"' && count == 1){
			printf("''");
			count = 0;
		}
		else
			printf("%c", c);
	}

	return 0;
}