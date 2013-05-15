#include<stdio.h>
int s[51];
int main()
{
	int c,i,j,k,n,m;
	freopen("299.txt","r",stdin);
	scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&m);
			for(j=1;j<=m;j++)
			{
				scanf("%d",&s[j-1]);
			}
			c=0;
			for(j=0;j<m;j++)
			{
				for(k=m-1;k>0;k--)
				{
					if(s[k]<s[k-1]){int p=s[k];s[k]=s[k-1];s[k-1]=p;c++;}
				}
			}
			printf("Optimal train swapping takes %d swaps.\n",c);
			for(j=1;j<=m;j++)
			{
				s[j-1]=0;
			}
		}
	return 0;
}
