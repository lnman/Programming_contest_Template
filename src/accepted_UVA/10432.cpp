#include<stdio.h>
#include<math.h>

int main()
{
	double r,n;
	freopen("10432.txt","r",stdin);
	while(scanf("%lf %lf",&r,&n)==2)
	{
		n=(r*r*n*sin(360.0/n))/2;
		printf("%.3lf\n",n);
	}
	return 0;
}