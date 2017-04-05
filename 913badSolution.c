#include <stdio.h>

int main(void){

	long long i, N, answer, num;

	while(scanf("%lld", &N) != EOF){

		for(i = 1, num = 0; i <= N; i += 2)
			num += i;

		answer = 1 + (num - 1) * 2;

		printf("%lld\n", 3 * answer - 6);
	}

	return 0;
}