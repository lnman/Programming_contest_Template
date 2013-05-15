#include<stdio.h>

int main()
{
	long long i; char a='%';
	while(scanf("%lld",&i)==1)
	{
		if(i<0)break;
		if(i==1||i==0)printf("0%c\n",a);
		else printf("%lld%c\n",i*25,a);
	}
	return 0;
}