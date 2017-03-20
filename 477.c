#include <stdio.h>
#include <math.h>


int main(void){

	struct rec{
		float x1, x2, y1, y2;
	}; typedef struct rec Rec;

	struct cir{
		float x, y, k;
	}; typedef struct cir Cir;

	char c;
	float X, Y;
	int i, yes, numOfPoint;

	Rec rectangular[11];
	Cir circular[11];

	for(i = 0; i < 11; i++){
		rectangular[i].x1 = rectangular[i].x2 = rectangular[i].y1 = rectangular[i].y2 = 0.0;
		circular[i].x = circular[i].y = circular[i].k = 0.0;
	}

	i = 1;	
	while( (c = getchar()) != '*'){
		if(c == 'r')
			scanf(" %f %f %f %f", &rectangular[i].x1, &rectangular[i].y1, &rectangular[i].x2, &rectangular[i].y2);
		else if(c == 'c')
			scanf(" %f %f %f", &circular[i].x, &circular[i].y, &circular[i].k);
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

		for(i = 1; i < 11; i++){
			if(pow((X - circular[i].x), 2) + pow((Y - circular[i].y), 2) < pow(circular[i].k, 2)){
				yes = 1;
				printf("Point %d is contained in figure %d\n", numOfPoint, i);
			}
		}

		if(yes == 0)
			printf("Point %d is not contained in any figure\n", numOfPoint);
			

		scanf("%f %f", &X, &Y);

	} while(1);

	return 0;
}