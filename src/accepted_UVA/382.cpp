#include<stdio.h>

int main()
{
	int n,i,j,k;
//	freopen("382.txt","r",stdin);
	printf("PERFECTION OUTPUT\n");
	while(scanf("%d",&n)==1&&n!=0)
	{
		j=n;
		i=0;
		while(j)
		{
			j=j/10;
			i++;
		}
		for(i=i+1;i<=5;i++)printf(" ");
		printf("%d  ",n);
		k=0;
		for(i=1;i<=n/2;i++)
		{
			if(n%i==0)k=k+i;
		}
		if(k==n)printf("PERFECT\n");
		if(k>n)printf("ABUNDANT\n");
		if(k<n)printf("DEFICIENT\n");
	}
	printf("END OF OUTPUT\n");
	return 0;
}