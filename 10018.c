#include <stdio.h>

int aba(int);

int reverse(int);

int main(void){

	int N, times;
	unsigned long sum, P, Q;

	scanf("%d", &N);

	for(; N > 0; N--){

		sum = times = 0;
		scanf("%ld", &P);

		do{
			Q = reverse(P);
			sum = Q + P;
			times++;
			P = sum;
		} while(aba(P) == 0);

		printf("%d %ld\n", times, P);
	}

	return 0;
}

int aba(int x){

	int temp[10] = {0};
	int i, j;

	i = j = 0;
	while(x > 0){
		temp[i] = x % 10;
		x /= 10;
		i++;
	}

	for(i--; j < i; i--, j++){
		if(temp[j] != temp[i])
			return 0;
	}

	return 1;

	/*for (int i = 0; i < loop_times; i++)
{
    int 左邊的數字 = (輸入的數字 / 10 的 (digitCount - (i+1) 次方) ) mod 10;
    int 右邊的數字 = (輸入的數字 mod 10 的 (i+1) 次方) / (10 的 i 次方);

    if (左邊的數字 != 右邊的數字)
        return false;
}*/
}

int reverse(int x){

	int temp[10] = {0};
	int i, j, sum;

	i = j = sum = 0;
	while(x > 0){
		temp[i] = x % 10;
		x /= 10;
		i++;
	}

	for(; j < i; j++)
		sum = sum * 10 + temp[j];

	return sum;
}