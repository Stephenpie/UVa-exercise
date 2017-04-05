#include <stdio.h>
#include <string.h>

int main(void){

	char map[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char input;
	int i;

	while( (input = getchar()) != EOF){

		if(input == ' ')
			printf(" ");
		else if(input == '\n')
			printf("\n");
		else{
			for(i = 0; i < strlen(map); i++){

				if(input == map[i] || input == map[i] - 32){
					printf("%c", map[i - 2]);
					break;
				}
			}
		}
	}

	return 0;
}