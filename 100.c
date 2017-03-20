#include <stdio.h>

int cal(int a);

int main(void){

	int i,j;
	int val, max;

	while( scanf("%d%d", &i, &j) != EOF){
		val = max = 0;
		printf("%d %d ", i, j);
		
		if( i <= j){
			for( ; i <= j; i++){
				val = cal(i);

				if(val > max)
					max = val;
			}
			printf("%d\n", max);
		} 
		else {
			for( ; j <= i; j++){
				val = cal(j);

				if(val > max)
					max = val;
			}
			printf("%d\n", max);
		}


	}
	return 0;
}

int cal(int a){
	int count = 1;

	while( a != 1){
		
		count++;

		if(a % 2 == 1)
			a = 3 * a + 1;
		else
			a /= 2;
	}
	return count;
}