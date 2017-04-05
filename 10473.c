#include <stdio.h>
#include <string.h>
#include <math.h>

void hexToDec(char *);
void decToHex(char *);

int main(void){

	char a[15];

	while(1){
		scanf("%s", a);

		if(a[0] == '-')
			break;

		else if(a[0] == '0' && a[1] == 'x')
			hexToDec(a);
		else
			decToHex(a);

	}

	return 0;
}

void hexToDec(char * input){

	int sum, i, j;

	sum = j = 0;
	for(i = strlen(input) - 1; i >= 2; i--, j++){
		if(input[i] >= 48 && input[i] <= 57)
			sum += (input[i] - '0') * pow(16, j);
		else if(input[i] >= 65 && input[i] <= 70)
			sum += (input[i] - 'A' + 10) * pow(16, j);
	}

	printf("%d\n", sum);

}

void decToHex(char * input){
	char ans[15];
	int i, sum;

	for(i = sum = 0; i < strlen(input) ; i++)
		sum = sum * 10 + input[i] - '0';

	if(sum != 0){
		/*for(i = 0; sum > 0; sum /= 16, i++){
			if(sum % 16 >= 0 && sum % 16 <= 9)
				ans[i] = sum % 16 + 48;
			else if(sum % 16 >= 10 && sum % 16 <= 15)
				ans[i] = sum % 16 + 55;
		}

		printf("0x");
		for(i--; i >=0; i--)
			printf("%c", ans[i]);
		printf("\n");*/
		printf("0x%X\n", sum);
	}
	else
		printf("0x0\n");
}