#include <stdio.h>
#include <math.h>

#define P 2.0*acos(0.0) 


int main(void){

	double x, y, z, a, d;

	while(scanf("%lf", &a) != EOF){
		y = a * a * (1 - P / 6 - sqrt(3) / 4);
		x = a * a * (P / 12 + sqrt(3) / 2 - 1);
		z = a * a - 4 * x - 4 * y;
		
		
		printf("%.3lf %.3lf %.3lf\n", z, 4 * x, 4 * y);

	}

	return 0;
}