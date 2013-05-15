#include<stdio.h>
int max[101];

int main()
{
	int n,i,j,k=0,s;
//	freopen("r.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		if(n==0) break;
		k=k+1;
		for(i=1;i<=n;i++)
		{
			scanf("%d ",&max[i]);
		}
		s=0;
		for(i=1;i<=n;i++)
		{
			s=s+max[i];
			if(i==n) s=s/n;}
		j=0;
		for(i=1;i<=n;i++){
			if(max[i]>s) j=j+(max[i]-s);
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",k,j);
	}
	return 0;
}




