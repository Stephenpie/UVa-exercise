#include <stdio.h>

void showwave(int );

int main(void){

	int n;
	int F, A;
	int i;

	scanf("%d", &n);

	while(n--){


		scanf("%d\n%d", &A, &F);

		for(i = 0; i < F; i++){

			showwave(A);

			if(i != F - 1)
				printf("\n");
		}

		if(n)
			printf("\n");

	}
}


void showwave(int A){

	int i, j;

	for(i = 1; i <= A; i++){
		for(j = i; j > 0; j--)
			printf("%d", i);
		printf("\n");
	}

	for(i = A - 1; i > 0; i--){
		for(j = i; j > 0; j--)
			printf("%d", i);
		printf("\n");
	}

}