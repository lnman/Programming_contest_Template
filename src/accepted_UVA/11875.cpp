#include<stdio.h>
#include<string.h>
int a[11];
int main()
{
	int i,j,n,m;
//	freopen("11875.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		for(j=1;j<=m;j++)scanf("%d",&a[j]);
		printf("Case %d: %d\n",i,a[j/2]);
	}
	return 0;
}