#include<stdio.h>
int i,j,k,a[9],b[9];
int main()
{
	long long c,d;
	while(scanf("%lld %lld",&c,&d)==2)
	{
		i=0;
		while(c)
		{
			a[i++]=c%10;c=c/10;
		}
		i=0;
		while(d)
		{
			b[i++]=d%10;d=d/10;
		}
		j=0;k=0;
		for(i=0;i<=8i++)
		{
			if(a[i]+b[i]+j>9){k++;j=1;}
			else j=0;
		}
		if(k==0)printf("No carry operation.\n");
		if(k==1)printf("1 carry operation.\n");
		if(k>1)printf("%d carry operations.\n",k);
		for(i=0;i<=8i++)
		{
			a[i]=0;b[i]=0;
		}
	}
}