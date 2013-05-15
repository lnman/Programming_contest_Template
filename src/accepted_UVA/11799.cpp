#include<stdio.h>
int a;
int main()
{
	int i,j,k,n,max;
//	freopen("11799.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		max=0;
		scanf("%d",&k);
		for(j=1;j<=k;j++)
		{
			scanf("%d",&a);
			if(a>max)max=a;
		}
		printf("Case %d: %d\n",i,max);
		max=0;
	}
	return 0;
}