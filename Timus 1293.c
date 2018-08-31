#include<stdio.h>

int main()
{
	int N,A,B;
	while (scanf("%d%d%d",&N,&A,&B) != EOF){
		printf("%d\n", 2*(N*A*B));
	}
	return 0;	
}
