#include<stdio.h>
char a[10000];

int main()
{
	int n,i,j,k;
//	freopen("623.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		printf("%d!\n",n);
		a[9999]=49;k=0;
		for(i=2;i<=n;i++)
		{
			int x=0;
			for(j=9999;;j--)
			{
			if(a[j]==0&&x==0)break;
			if(a[j]==0)a[j]=48;
			int f=a[j]-48;
			int z=f*i+x;
			a[j]=(z%10)+48;
			x=z/10;
			}
		}
		for(i=0;i<=9999;i++)
		{
			if(a[i]==0)continue;printf("%c",a[i]);
		}
		printf("\n");
		for(i=0;i<10000;i++)a[i]=0;
	}
	return 0;
}
