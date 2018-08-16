#include<stdio.h>


int main()
{
    long n,x,a,b,y,t1,i;
    while(scanf("%ld",&n)==1 && n)
    	{
    		scanf("%ld%ld",&x,&y);
    			for(i=0;i<n;i++)
      				{
      					scanf("%ld%ld",&a,&b);
      					if(x == a || y==b )
      						printf("divisa\n");
      					if(a>x && b>y)
      						printf("NE\n");
      					if(a<x && b>y)
      						printf("NO\n");
        				if(a<x && b<y)
      						printf("SO\n");
        				if(a>x && b<y)
      						printf("SE\n");      
      }
    }



		return 0;
}
