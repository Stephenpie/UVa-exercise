#include <stdio.h>

int main(void){

	int n, numOfFarmers, numOfAnimals;
	long long acre, level, sum;


	while(scanf("%d", &n) != EOF){

		for(; n > 0; n--){
			sum = 0;
			scanf("%d", &numOfFarmers);

			for(; numOfFarmers > 0; numOfFarmers--){
				scanf("%lld%d%lld", &acre, &numOfAnimals, &level);
				sum += (acre * level);
			}

			printf("%lld\n", sum);			
		}

	}

	return 0;
}