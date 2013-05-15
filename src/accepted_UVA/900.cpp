#include<stdio.h>
#include<math.h>
int main()
{
	long long i,j,k,l,n;
	while(scanf("%lld",&n)==1&&n!=0)
	{
		j=1;k=2;
		if(n==1)k=1;
		if(n==2)k=2;
		for(i=3;i<=n;i++)
		{
			l=k;
			k=j+k;
			j=l;
		}
		printf("%lld\n",k);
	}
}