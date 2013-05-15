#include<stdio.h>
#include<math.h>
int a[100],b[100];
int main()
{
	int i,j,n;
//	freopen("160.txt","r",stdin);
	while(scanf("%d",&n)==1&&n!=0)
	{
		if(n<10)printf("  %d! =",n);
		else if(n<100)printf(" %d! =",n);
		else printf("%d! =",n);
		for(i=0;i<n-1;i++)a[i]=i+2;
		int x=0;
		for(i=2;i<=n;i++)
		{
			int q=0,p=sqrt(i);
			for(j=2;j<=p;j++)
			{if(i%j==0){q=1;break;}}
			if(q==0)b[x++]=i;
		}
		for(i=0;i<x;i++)
		{
			if(i!=0&&i%15==0)printf("\n      ");
			int p=0;
			for(j=0;j<n-1;j)
			{
				if(a[j]%b[i]==0){a[j]=a[j]/b[i];p++;}
				else j++;
			}
			int q=0;
			for(j=0;j<n-1;j++)
			{
				if(a[j]==1)q++;
			}
			if(q==n-1)if(p>0){printf("  %d",p);break;}
			if(p>=10)printf(" %d",p);
			else if(p<10)printf("  %d",p);
			else printf("%d",p);
		}
		printf("\n");
	}
	return 0;
}