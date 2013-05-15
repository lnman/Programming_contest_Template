#include<stdio.h>
#include<math.h>
int main()
{
	signed int i,j,k=0,l,m=0,n=0,p=1,x;
	freopen("583.txt","r",stdin);
	while(scanf("%d",&i)==1&&i!=0)
	{
		printf("%d = ",i);
		m=0;k=0;
		if(i<0){printf("-1");i=-i;m=1;}
		l=sqrt(i);
		for(j=2;j<=l;j++)
		{
			if(i%j==0){k=1;break;}
		}
		if(k==0)
		{
			if(m==1)printf(" x %d\n",i);
			else printf("%d\n",i);
			continue;
		}
		x=i;
		n=i/2;
		p=1;
		for(j=2;j<=n;j)
		{
			if(i%j==0&&m==0){
				printf("%d",j);i=i/j;m=1;p=p*j;
				if(p==x)break;
				else continue;}
			if(i%j==0&&m==1){printf(" x %d",j);i=i/j;
			p=p*j;
			if(p==x)break;
			else continue;}
			j++;
		}
		printf("\n");
	}
	return 0;
}