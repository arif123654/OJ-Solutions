#include <stdio.h>

int main()
{

    int t,n,i,x,y;
    scanf("%d", &t);
    for( i = 1; i <= t; i++)
    {
        	scanf("%d", &n);
        	
        	n*=567;
        	n/=9;
        	n+=7492;
        	n*=235;
        	n/=47;
        	n-=498;
        	
        	x = n %100;
	      	y = n % 10;
	      	x-=y;
			x/=10;
			if(x < 0)
        		printf("%d\n", -x);
    		else 
    			printf("%d\n", x);
    			
	}
    return 0;
}

