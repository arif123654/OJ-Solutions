#include <stdio.h>

int main()
{
	int N;
	
	
	scanf("%d", &N);
	
	if (N>0){
		
		printf("%d", N*(N+1)/2);
		
	}
	
	else {
		
		printf("%d", 1+N*(1-N)/2);
	}
	
	return 0;
}