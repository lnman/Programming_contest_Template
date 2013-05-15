#include<stdio.h>
#include<math.h>

int a[3000];
int main()
{
	int n,c,i,j,k,d;
//	freopen("406.txt","r",stdin);
	while(scanf("%d %d",&n,&c)==2)
	{
		printf("%d %d:",n,c);
		d=1;
		for(i=1;i<=n;i++)
		{
			k=0;
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0){k=1;break;}
			}
			if(k==0)a[d++]=i;
		}
		if((d-1)%2==0)
		{
			for(i=(d/2)-(c-1);i<=(d/2)+c;i++)
			{
				if(i>=1&&i<d){if(a[i]>=1&&a[i]<=n)printf(" %d",a[i]);}
			}
		}
		else
		{
			for(i=((d+1)/2)-c+1;i<=((d+1)/2)+c-1;i++)
			{
				if(i>=1&&i<d){if(a[i]>=1&&a[i]<=n)printf(" %d",a[i]);}
			}
		}
		printf("\n\n");
	}
	return 0;
}
