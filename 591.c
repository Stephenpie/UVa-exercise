#include <stdio.h>

int main(void){

	int N[50];
	int h, n;
	int i, step, sum;
	int circle = 0;

	scanf("%d", &n);

	while(n != 0){

		circle++;
		step = sum = 0;
		for(i = 0; i < 50; i++)
			N[i] = 0;

		for(i = 0; i < n; i++){
			scanf("%d", &h);
			sum += h;
			N[i] = h;
		}

		sum = sum / n;

		for(i = 0; i < n; i++){
			if(N[i] > sum)
				step += (N[i] - sum);
		}

		printf("Set #%d\n", circle);
		printf("The minimum number of moves is %d.\n", step);
		printf("\n");

		scanf("%d", &n);

	}

	return 0;
}