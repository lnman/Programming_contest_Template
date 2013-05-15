#include<stdio.h>

int main()
{
	int n,m,i,j,k,a,b,c;
	freopen("10300.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		for(i=1;i<=n;i++)
		{
			scanf("%d",&m);k=0;
			for(j=1;j<=m;j++)
			{
				scanf("%d %d %d",&a,&b,&c);
				k=k+a*c;
			}
			printf("%d\n",k);
		}
	}
	return 0;
}