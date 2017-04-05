#include <stdio.h>

int main(void){

	int x, y;
	int a[11], b[11];
	int i, j, w, times, carry, maxlen;

	;

	while( scanf("%d%d", &x, &y) != EOF && (x || y) ){

		times = 0;
		for(i = 0; i < 11; i++)
			a[i] = b[i] = 0;

		i = 0;
		while(x > 0){
			a[i] = x % 10;
			x /= 10;
			i++;
		}

		j = 0;
		while(y > 0){
			b[j] = y % 10;
			y /= 10;
			j++;
		}

		if(i >= j)
			maxlen = i;
		else 
			maxlen = j;

		carry = 0;
		for(w = 0; w <= maxlen; w++){

			if(a[w] + b[w] + carry < 10)
				carry = 0;
			else{
				times++;
				carry = 1;
			}
		}

		if(times == 0)
			printf("No carry operation.\n");
		else if(times == 1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n", times);

	}




	return 0;
}