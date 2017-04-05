#include <stdio.h>
#include <string.h>

int main(void){

	char s[100000];
	char t[100000];
	int x[100000];
	int i, j, yes, indexJ;

	while(scanf("%s", s) != EOF){
		yes = 1;
		indexJ = 0;
		for(i = 0; i < 100000; i++)
			x[i] = 0;

		scanf("%s", t);

		for(i = 0; i < strlen(s); i++){

			for(j = indexJ; j < strlen(t); j++){
				if(s[i] == t[j]){
					indexJ = j;
					x[i] = 1;
					break;
				}
			}
			indexJ++;
		}

		for(i = 0; i < strlen(s); i++){
			if(x[i] == 0){
				yes = 0;
				break;
			}
		}

		if(yes)
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}