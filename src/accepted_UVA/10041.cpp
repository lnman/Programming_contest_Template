#include<stdio.h>
int a[30000];

int main()
{
	int n,i,j,k,min=0,l,p;
	freopen("10041.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		for(l=1;l<=n;l++)
		{
			scanf("%d",&p);
		for(i=1;i<=p;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=p;i++)
		{
			k=0;
			for(j=1;j<=p;j++)
			{
				if(a[i]>a[j])k=k+a[i]-a[j];
				else k=k+a[j]-a[i];
			}
			if(i==1)min=k;
			if(min>k&&min>=0)min=k;
		}
		printf("%d\n",min);
		}
	}
	return 0;
}