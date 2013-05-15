#include<stdio.h>
int a[3002];
int main()
{
	int n,i,j,k,b,c,d;
//	freopen("10038.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		k=0;
		for(i=1;i<=n;i++)
		{
			if(i==1){scanf("%d",&b);continue;}
			else
			{
				if(k==0)
				{
					scanf("%d",&c);k=1;
					if(b-c<0)a[i]=c-b;
					else a[i]=b-c;
					continue;
				}
				if(k==1)
				{
					scanf("%d",&b);k=0;
					if(b-c<0)a[i]=c-b;
					else a[i]=b-c;
					continue;
				}
			}
		}
		d=0;
		for(i=1;i<n;i++)
		{
			k=0;
			for(j=2;j<=n;j++)
			{
				if(a[j]==i){k=1;break;}
			}
			if(k==1)continue;
			else {d=1;break;}
		}
		if(d==0)printf("Jolly\n");
		else printf("Not jolly\n");
	}
	return 0;
}