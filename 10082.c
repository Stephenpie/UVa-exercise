#include <stdio.h>
#include <string.h>

int main(void){

	char X[] = {'`', '1', '2', '3', '4', '5', '6', '7', 
				'8', '9', '0', '-', '=', 'Q', 'W',
				'E', 'R', 'T', 'Y', 'U', 'I', 'O',
				'P', '[', ']', '\\', 'A', 'S', 'D',
				'F', 'G', 'H', 'J', 'K', 'L', ';', 
				'\'', 'Z', 'X', 'C', 'V', 'B', 'N',
				'M', ',', '.', '/', '\0'};
	char c;
	int i;

	while( (c = getchar()) != EOF){
		if(c == '\n' || c == ' ')
			printf("%c", c);
		else{
			for(i = 0; i < strlen(X); i++){
				if(c == X[i]){
					printf("%c", X[i - 1]);
					break;
				}
			}
		}
	}

	return 0;
}