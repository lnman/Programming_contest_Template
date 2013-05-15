#include<stdio.h>

int main()
{
	long long n,i,s;
	while(scanf("%lld",&n)==1&&n>=0)
	{
		if(n==0){printf("1\n");continue;}
		s=2;
		for(i=2;i<=n;i++)
		{
			s=s+i;
		}
		printf("%lld\n",s);
	}
	return 0;
}