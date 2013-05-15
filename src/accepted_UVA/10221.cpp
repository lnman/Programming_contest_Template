#include<stdio.h>
#include<string.h>
#include<math.h>
char f[10];
int main()
{
	double i,j,k,n,m;
//	freopen("10221.txt","r",stdin);
	while(scanf("%lf %lf ",&m,&n)==2)
	{
		m=m+6440;
		scanf("%s",f);
		if(n>180)n=360-n;
		if(f[0]==100){k=2*acos(-1)*(n/360);i=sin(n*acos(-1.0)/360);}
		else {k=2*acos(-1)*((n/60)/360);i=sin(n*acos(-1.0)/21600);}
		printf("%lf %lf\n",m*k,i*2*m);
	}
	return 0;
}