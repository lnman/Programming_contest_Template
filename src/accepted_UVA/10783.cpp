#include<stdio.h>

int main()
{
	int i,j,k,n,s,a;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&j,&k);
		s=0;
			if(j%2==0)j=j+1;
		for(a=j;a<=k;a+=2){
		 s=s+a;
		}
		printf("case %d: %d\n",i,s);
	}
	return 0;
}
