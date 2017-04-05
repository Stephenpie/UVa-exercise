#include <stdio.h>

int main(void){

	long long row, answer, lastNum, N;

	while(scanf("%lld", &N) != EOF){

		row = (N + 1) / 2;

		lastNum = row * row * 2 - 1;

		printf("%lld\n", 3 * lastNum - 6);
	}

	return 0;
}