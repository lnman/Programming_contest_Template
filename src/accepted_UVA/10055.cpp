#include<stdio.h>

int main()
{
long long i,j,l;
	while(scanf("%lld %lld",&i,&j)==2)
	{l=i-j;
		if(l<0) l=l*(-1);
		 printf("%lld\n",l);
	}
	return 0;
}