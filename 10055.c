#include <stdio.h>
#include <stdlib.h>



int main(void){

	long long x, y, ans;

	while(scanf("%lld%lld", &x, &y) != EOF){
	
		if(x > y)
			ans = x - y;
		else
			ans = y - x;
		
		printf("%lld\n", ans);
	}

	return 0;
}