#include<stdio.h>
#include<string.h>
char a[102][102];
int i,j,k,l,m,n,o;
void rec(int k,int l)
{
	for(int x=k-1;x<=k+1&&x<n;x++)
	{
		for(int y=l-1;y<=l+1&&y<o;y++)
		{
			if(a[x][y]=='@'){a[x][y]=0;rec(x,y);}
		}
	}
}
int main()
{
//	freopen("572.txt","r",stdin);
	while(scanf("%d %d\n",&n,&o)==2&&n!=0)
	{
		for(i=0;i<n;i++)
		{
			gets(a[i]);
		}
		m=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<o;j++)
			{
				if(a[i][j]=='@'){a[i][j]=0;rec(i,j);m++;}
			}
		}
		printf("%d\n",m);
	}
	return 0;
}