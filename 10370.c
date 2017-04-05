#include <stdio.h>

int main(void){

	int C, N;
	int sum, numOfAboveAverage, i, x[1000];
	double average;

	while(scanf("%d", &C) != EOF){

		for(; C > 0; C--){
			numOfAboveAverage = 0;
			sum = 0;

			scanf("%d", &N);

			for(i = 0; i < N; i++){
				scanf("%d", &x[i]);
				sum += x[i];
			}
			average = (double)sum / N;

			for(i = 0; i < N; i++){
				if(x[i] > average)
					numOfAboveAverage++;
			}

			printf("%.3f%%\n", (float)numOfAboveAverage / N * 100);
			
		}
	}
	return 0;
}