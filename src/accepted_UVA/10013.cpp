#include<stdio.h>
int a[1000001],b[1000001],c[1000001];
int main()
{
	int n,m,i,j,k=0;
//	freopen("10013.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&m);
			if(k!=0)printf("\n");k++;
			for(i=m;i>=1;i--)
			{
				scanf("%d %d",&a[i],&b[i]);
			}
			for(i=1;i<=m;i++)
			{
				if(a[i]+b[i]<10)c[i]=a[i]+b[i];
				if(a[i]+b[i]>=10){c[i]=(a[i]+b[i])%10;b[i+1]=b[i+1]+1;}
			}
			for(i=m;i>=1;i--)
			{
				printf("%d",c[i]);
			}
			for(i=m;i>=1;i--)
			{
				a[i]=0,b[i]=0;
			}
			printf("\n");
			k++;
		}
	}
	return 0;
}