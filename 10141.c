#include <stdio.h>
#include <string.h>

int main(void){

	int n, p, item, itemMatched;
	int i, j, times;
	char X[81], company[81], companyMatched[81];
	char c;
	float price, minPrice;;

	i = j = times = 0;

	while(scanf("%d%d", &n, &p)){
		if(n == 0 && p ==0)
			break;

		if(times)
			printf("\n");

		itemMatched = 0;
		times++;
			
		c = getchar();
		for(i = 0; i < n; i++){
			scanf("%[^\n]s", X);
			c = getchar();
		}



		for(i = 0; i < p; i++){
			scanf("%[^\n]", company);
			c = getchar();
			scanf("%f %d", &price, &item);
			
			if(item > itemMatched){
				strcpy(companyMatched, company);
				itemMatched = item;
				minPrice = price;
			}
			else if(item == itemMatched){
				if(price < minPrice){
					strcpy(companyMatched, company);
					itemMatched = item;
					minPrice = price;					
				}
			}

			c = getchar();
			for(j = 0; j < item; j++){
				scanf("%[^\n]", X);
				c = getchar();
			}
		}

		printf("RFP #%d\n", times);
		printf("%s\n", companyMatched);


	}

	return 0;
}