#include <stdio.h>

int main()
{

    int t,a,b,c,i;
    scanf("%d", &t);
    for( i = 0; i <= t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if( a > b && a > c){
            if( b > c)
                printf("Case %d: %d", i, b);
            else if ( c > b)
                printf("Case %d: %d", i, c);
        }

        else if ( b > c && b > a){
            if( a > c )
                printf("Case %d: %d", i, a);
            else if ( c > a )
                printf("Case %d: %d", i, c);
        }

        else if( c > a && c > b){

            if( b > a )
                    printf("Case %d: %d", i, b);
            else if ( a > b )
                    printf("Case %d: %d", i, a);
        }
    }
    return 0;
}

