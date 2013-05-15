#include<stdio.h>
#include<string.h>
char d,a[107][107];

int main()
{
	int n,m,i,j,k,l,c=1,x,z=0;
	freopen("10189.txt","r",stdin);
	while(scanf("%d %d",&n,&m)==2)
	{
		if(n==0&&m==0)break;
		if(n==0||m==0)continue;
		if(z!=0)printf("\n");
		z++;
		for(i=0;i<=106;i++)
		{
			for(j=0;j<=106;j++)
			{
				a[i][j]=0;
			}
		}
//		fflush(stdin);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				scanf("%c",&d);
				if(d=='\n'||d==' '){j=j-1;continue;}
				else a[i][j]=d;
			}
		}
		printf("Field #%d:\n",c);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(a[i][j]=='*')printf("*");
				else
				{
					x=0;
					for(k=i-1;k<i+2;k++)
					{
						for(l=j-1;l<j+2;l++)
						{
							if(k==i&&l==j)continue;
							if(a[k][l]=='*')x=x+1;
						}
					}
					printf("%d",x);
				}
			}
			printf("\n");
		}
		c++;
//		printf("\n");
	}
	return 0;
}