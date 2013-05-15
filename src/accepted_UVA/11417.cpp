#include<stdio.h>
int GCD(int i,int j)
{
	int x=j,y=i;
	while(x%y!=0)   
	{
		int m=x%y;
		x=y;
		y=m;
	}
	return y;
}

int main()
{
	int G,N,i,j;
//	freopen("11417.txt","r",stdin);
	while(scanf("%d",&N)==1&&N!=0)
	{
		G=0;
		for(i=1;i<N;i++)
		{
			for(j=i+1;j<=N;j++)
			{
				G+=GCD(i,j);
			}
		}
		printf("%d\n",G);
	}
	return 0;
}