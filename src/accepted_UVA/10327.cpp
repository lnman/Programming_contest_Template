#include<stdio.h>
int a[1010];
int main()
{
	int n,i,j,k;
//	freopen("10327.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		k=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1]){int x=a[j+1];a[j+1]=a[j];a[j]=x;k++;}
			}
		}
		printf("Minimum exchange operations : %d\n",k);
		for(i=0;i<n;i++)
		{
			a[i]=0;
		}
	}
	return 0;
}