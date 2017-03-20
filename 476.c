#include <stdio.h>


int main(void){

	struct rec{
		float x1, x2, y1, y2;
	}; typedef struct rec Rec;

	char c;
	float X, Y;
	int i, yes, numOfPoint;

	Rec rectangular[11];

	i = 1;	
	while( (c = getchar()) != '*'){
		scanf(" %f %f %f %f", &rectangular[i].x1, &rectangular[i].y1, &rectangular[i].x2, &rectangular[i].y2);
		i++;
		c = getchar();
	}

	numOfPoint = 0;
	scanf("%f %f", &X, &Y);

	do{
		if( (int)(X * 10) == 99999 && (int)(Y * 10) == 99999)
			break;

		numOfPoint++;
		yes = 0;

		for(i = 1; i < 11; i++){
			if(X > rectangular[i].x1 && X < rectangular[i].x2 && Y < rectangular[i].y1 && Y > rectangular[i].y2){
				yes = 1;
				printf("Point %d is contained in figure %d\n", numOfPoint, i);
			}
		}

		if(yes == 0)
			printf("Point %d is not contained in any figure\n", numOfPoint);
			

		scanf("%f %f", &X, &Y);

	} while(X != 9999.9 && Y != 9999.9);

	return 0;
}