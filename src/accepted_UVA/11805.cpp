#include<stdio.h>

int main()
{
	int i,j,k,m,n,s=0;
//	freopen("11805.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&m,&j,&k);
		if(j>m)j=j%m;
		s=(k%m)+j;
		if(s>m)s=s%m;
		printf("Case %d: %d\n",i,s);
	}
	return 0;
}