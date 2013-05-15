#include<stdio.h>

int main()
{
	unsigned int i,j;
	while(scanf("%d %d",&i,&j)==2)
	{
		printf("%d\n",i*j*2);
	}
	return 0;
}