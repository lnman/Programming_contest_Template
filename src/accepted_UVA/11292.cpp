#include <stdio.h>
#include<stdlib.h>
int a[20001],b[20001];
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int i,j,k,l,m,n,min,c=0;
//	freopen("11292.txt","r",stdin);
	while(scanf("%d%d",&n,&m)==2&&(m!=0&&n!=0))
	{
		
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=m;i++)
		{
			scanf("%d",&b[i]);
		}
		if(n>m)
		{
			printf("Loowater is doomed!\n");
			continue;
		}
		qsort (a, n+1, sizeof(int), compare);
		qsort (b, m+1, sizeof(int), compare);
		k=0;c=0;
		j=1;
		for(i=1;i<=n;i++)
		{
			for(j=j;j<=m;j++)
			{
				if((b[j]>=a[i])){break;}
			}
			if(b[j]<a[i]){c=1;break;}
			k+=b[j];b[j]=0;
			a[i]=0;
			j++;
		}
		if(c==1)printf("Loowater is doomed!\n");
		else printf("%d\n",k);
		for(i=1;i<=m;i++)
		{
			b[i]=0;a[i]=0;
		}
	}
	return 0;
}
