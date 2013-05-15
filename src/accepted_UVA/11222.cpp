#include<stdio.h>
#include<stdlib.h>
int k[3][1003],m[3][1002];
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
	int i,j,l,n,x;
//	freopen("11222.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&k[j][0]);
			for(l=1;l<=k[j][0];l++)scanf("%d",&k[j][l]);
		}
		for(j=0;;)
		{
			int a=1;
			m[j][0]=0;
			for(l=1;l<=k[j][0];l++)
			{
				int p=0;
				for(x=1;x<=k[1][0];x++)
				{
					if(k[j][l]==k[1][x]){p=1;break;}
				}
				if(p==1)continue;
				for(x=1;x<=k[2][0];x++)
				{
					if(k[j][l]==k[2][x]){p=1;break;}
				}
				if(p==1)continue;
				else {m[j][0]++;m[j][a++]=k[j][l];}
			}
			break;
		}
		for(j=1;;)
		{
			int a=1;
			m[j][0]=0;
			for(l=1;l<=k[j][0];l++)
			{
				int p=0;
				for(x=1;x<=k[0][0];x++)
				{
					if(k[j][l]==k[0][x]){p=1;break;}
				}
				if(p==1)continue;
				for(x=1;x<=k[2][0];x++)
				{
					if(k[j][l]==k[2][x]){p=1;break;}
				}
				if(p==1)continue;
				else {m[j][0]++;m[j][a++]=k[j][l];}
			}
			break;
		}
		for(j=2;;)
		{
			int a=1;
			m[j][0]=0;
			for(l=1;l<=k[j][0];l++)
			{
				int p=0;
				for(x=1;x<=k[1][0];x++)
				{
					if(k[j][l]==k[1][x]){p=1;break;}
				}
				if(p==1)continue;
				for(x=1;x<=k[0][0];x++)
				{
					if(k[j][l]==k[0][x]){p=1;break;}
				}
				if(p==1)continue;
				else {m[j][0]++;m[j][a++]=k[j][l];}
			}
			break;
		}
		printf("Case #%d:\n",i);
		if(m[0][0]>m[1][0])l=m[0][0];
		else l=m[1][0];
		if(l>m[2][0])l=l;
		else l=m[2][0];
		for(j=0;j<=2;j++)
		{
			if(m[j][0]==l)
			{
				printf("%d %d",j+1,m[j][0]);
				x=m[j][0];
				m[j][0]=0;
				qsort (m[j],x+1, sizeof(int), compare);
				for(int p=1;p<=x;p++)
					printf(" %d",m[j][p]);
				printf("\n");
			}
		}
	}
	return 0;
}
