#include<stdio.h>

int main()
{
	int n,i,j,k=0,l;
	while(scanf("%d %d",&n,&l)==2)
	{
		if(n<=0){printf("0\n");continue;}
		i=n;
		j=0;
		k=0;
		while(n)
		{
			i=i+n/l;
			if(n>l-1)k=n%l;
			n=(n/l)+k;k=0;
		}
		printf("%d\n",i);
	}
	return 0;
}