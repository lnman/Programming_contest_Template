#include<stdio.h>

int e,i,j;
bool a[101][101],visited[101],tag;

void dfs(int x)
{
	if(tag)visited[x]=1;
	tag=1;
	for(int l=1;l<=e;l++)
		if(visited[l]==0&&a[x][l]==1)
			dfs(l);
}

int main()
{
//	freopen("280.txt","r",stdin);
	while(scanf("%d",&e)==1&&e!=0)
	{
		while(scanf("%d",&i)==1&&i!=0)
		{
			while(scanf("%d",&j)==1&&j!=0){a[i][j]=1;}
		}
		scanf("%d",&i);
		while(i--)
		{
			scanf("%d",&j);
			tag=0;
			dfs(j);
			int k=0;
			for(j=1;j<=e;j++)if(visited[j]==0)k++;
			printf("%d",k);
			for(j=1;j<=e;j++)if(visited[j]==0)printf(" %d",j);
			printf("\n");
			for(j=1;j<=e;j++)visited[j]=0;
		}
		for(i=1;i<=100;i++)
			for(j=1;j<=100;j++)a[i][j]=0;
	}
	return 0;
}