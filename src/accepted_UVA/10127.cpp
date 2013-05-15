#include<stdio.h>
int main()
{
	int n,i,l,j;
	freopen("10127.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		if(n%2==0||n%5==0){printf("0\n");continue;}
		j=1;
		for(i=1;;i++)
		{
			if(j%n==0)break;
			else
			{
				j=(j%n)*10+1;
			}

		}
		printf("%d\n",i);
	}
}