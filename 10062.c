#include <stdio.h>
#include <string.h>

int main(void){

	struct node {
		int times;
		char c;
	};

	struct node X[1005], tmp;

	char input[1005] = {'\0'};
	int i, j, find;
	int blank = 0;

	while( gets(input) ){

		if(blank)
			printf("\n");

		/* initialization */
		for(i = 0; i < 1005; i++){
			X[i].c ='\0';
			X[i].times = 0;
		}
		
		/* put input into Node array */
		for(i = 0; i < strlen(input); i++){
			find = 0;

			for(j = 0; j < 1005; j++){
				if(input[i] == X[j].c){
					X[j].times++;
					find = 1;
					break;
				}
			}
			if(!find){			
				X[i].c = input[i];
				X[i].times++;	
			}
		}

		/* bubble sort Node array */
		for(i = 0; i < 1005; i++){
			for(j = 0; j < 1004; j++){
				if(X[j].times > X[j + 1].times){
					tmp.c = X[j + 1].c;
					tmp.times = X[j + 1].times;

					X[j + 1].c = X[j].c;
					X[j + 1].times = X[j].times;

					X[j].c = tmp.c;
					X[j].times = tmp.times;
				}
				else if(X[j].times == X[j + 1].times && X[j].c < X[j + 1].c){
					tmp.c = X[j + 1].c;
					tmp.times = X[j + 1].times;

					X[j + 1].c = X[j].c;
					X[j + 1].times = X[j].times;

					X[j].c = tmp.c;
					X[j].times = tmp.times;
				}
			}
		}

		/* print output */
		for(i = 0; i < 1005; i++){
			if(X[i].times != 0){
				printf("%d %d\n", X[i].c, X[i].times);
			}
		}

		for(i = 0; i < 1005; i++)
			input[i] = 0;

		blank = 1;
	}

	return 0;
}