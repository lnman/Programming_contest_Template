#include<stdio.h>
#include<string.h>
char a[27][27];
int i,j,k,l,m,n;
void rec(int k,int l)
{
	for(int x=k-1;x<=k+1&&x<n;x++)
	{
		for(int y=l-1;y<=l+1&&y<n;y++)
		{
			if(a[x][y]==49){a[x][y]=0;rec(x,y);}
		}
	}
}
int main()
{
	int q=1;
//	freopen("352.txt","r",stdin);
	while(scanf("%d\n",&n)==1)
	{
		for(i=0;i<n;i++)
		{
			gets(a[i]);
		}
		m=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]==49){a[i][j]=0;rec(i,j);m++;}
			}
		}
		printf("Image number %d contains %d war eagles.\n",q,m);
		q++;
	}
	return 0;
}