#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double p,k;
//	freopen("113.txt","r",stdin);
	while(scanf("%d%lf",&n,&p)==2)
	{
		k=pow(p,1/double(n));
		printf("%.0lf\n",k);
	}
	return 0;
}