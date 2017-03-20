#include <stdio.h>

double fabfunction(double, double);

int main(void){


	double h, m, answer, fab;
	
	scanf("%lf:%lf", &h, &m);

	while(h != 0.0 || m != 0.0){

		h = h * 30 + (m / 60 * 30);
		m = m * 6;

		fab = fabfunction(h, m);

		if(fab > 180)
			answer = 360 - fab;
		else
			answer = fab;

		printf("%.3f\n", answer);

		scanf("%lf:%lf", &h, &m);

	}

	return 0;
}

double fabfunction(double a, double b){

	if(a - b >= 0)
		return a - b;
	else
		return b - a;

}


