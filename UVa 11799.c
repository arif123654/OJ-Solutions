#include<stdio.h>
int main()
{
    int t,n,c,k,i;
	long int m;
    while (scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            m=0;
            scanf("%d",&n);
            for (k=0;k<n;k++)
            {
                scanf("%d",&c);
                if (c>m)
                    m=c;
            }
            printf("Case %d: %ld\n",i,m);
        }
    }
return 0;
}
