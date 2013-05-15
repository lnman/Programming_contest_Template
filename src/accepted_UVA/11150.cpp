#include<stdio.h>

int main()
{
	int n,i,j,k=0;
//	freopen("11150.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		if(n<=0){printf("0\n");continue;}
		i=n;
		j=0;
		k=0;
		while(n)
		{
			if(n%3==2&&j==0){n=n+1;j=1;}
			i=i+n/3;
			if(n>2)k=n%3;
			n=(n/3)+k;k=0;
		}
		printf("%d\n",i);
	}
	return 0;
}