#include<stdio.h>
int main (){
	int t,n,i;
	while(scanf("%d",&t)==1){
		int	win = 0;
		for(i = 0; i<=4; i++)
		{
			scanf("%d",&n);
			
			if( n==t )
				win++;
		}
		printf("%d\n", win);	
	}
	return 0;
}
