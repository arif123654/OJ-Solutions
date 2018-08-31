#include<stdio.h>
int main()
{
	int f;
	while(scanf("%d",&f) != EOF && f){
	if(f >= 7)
		printf("YES\n");
	else
		printf("NO\n");
	}
	return 0;
}
