#include<stdio.h>
#define Pi 2*acos(0.0)
int main()
{	
	int t;
	scanf("%d",&t);
	
	while(t--){
		double l,r,w;
		scanf("%lf", &l);
		r = 0;
		r = l/5;
		w = (6*l)/10;
		r = Pi*r*r;
		w = (l*w)-r;
	printf("%.2lf %.2lf\n", r,w);
	}
	return 0;
}
