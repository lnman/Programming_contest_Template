#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long n;
//	freopen("10110.txt","r",stdin);
	while(scanf("%ld",&n)==1)
	{
		if(n==0)break;
		if(floor(sqrt(n))==ceil(sqrt(n)))printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
