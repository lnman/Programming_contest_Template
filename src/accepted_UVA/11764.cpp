#include<stdio.h>

int main()
{
	int i,j,k,n,a,b;
//	freopen("11764.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		scanf("%d",&a);
		int l=0,h=0;
		for(j=2;j<=k;j++)
		{
			scanf("%d",&b);
			if(a>b)l++;
			if(a<b)h++;
			a=b;
		}
		printf("Case %d: %d %d\n",i,h,l);
	}
	return 0;
}