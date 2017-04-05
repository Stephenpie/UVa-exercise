#include <stdio.h>
#include <stdlib.h>


int main(void){

	int n, i;
	int x1, x2, yes;
	int y[3005];


	while(scanf("%d", &n) != EOF){
		
		yes = 1;
		for(i = 0; i < 3005; i++)
			y[i] = 0;

		if(n == 1){
			scanf("%d", &x1);
			if(x1 > n)
				yes = 0;
		} 
		else{
			for(i = 0; i < n; i++){

				if(i == 0){
					scanf("%d", &x1);
					continue;
				}

				else{
					scanf("%d", &x2);

					if(abs(x2 - x1) >= 1 && abs(x2 - x1) < n){
						y[ abs(x2 - x1) ] = 1;
						x1 = x2;
					}
				}
			}

			for(i = 1; i < n; i++){
				if(y[i] == 0){
					yes = 0;
					break;	
				}
			}
		}

		if(yes)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}

	return 0;
}