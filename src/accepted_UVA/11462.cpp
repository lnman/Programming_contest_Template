#include<stdio.h>
#include<string.h>
int c[2000001];

int main()
{
	int n,i,j,g;
//	freopen("11462.txt","r",stdin);
	while(scanf("%d",&n)==1&&n!=0)
	{
		for(i=1;i<=n;i++)
			scanf("%d",&c[i]);
		g=0;
		for(i=1;i<=100;i++)
		{
			for(j=1;j<=n;j++){
				
				if(i==c[j]){
					if(g)printf(" ");
					g++;
					printf("%d",i);}
			}
		}
		printf("\n");
	}
	return 0;
}