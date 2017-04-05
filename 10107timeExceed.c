#include <stdio.h>

void sort(long long *, int);

int main(void){

	int i = 1;
	long long X[100001] = {0};
	long long ans;

	while(scanf("%lld", &X[i]) != EOF){

		sort(X, i);

		if(i % 2 == 0){
			ans = X[i / 2] + X[i / 2 + 1];
			printf("%lld\n", ans / 2 );
		}
		else{
			printf("%lld\n", X[ (1 + i) / 2 ]);
		}

		i++;
	}

	return 0;
}

void sort(long long *y, int x){

	int i, j, tmp;

	for(i = 1; i <= x; i++){
		for(j = 1; j < x; j++){

			if(y[j] > y[j + 1]){
				tmp = y[j + 1];
				y[j + 1] = y[j];
				y[j] = tmp;
			}
		}
	}
}