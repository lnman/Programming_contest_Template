#include<stdio.h>
#include<math.h>
int a,j,k;
int prime(int s)
{

	int m=sqrt(s);
	for(j=3;j<=m;j+=2)
	{
		if(s%j==0)k=1;
		if(k==1)break;
	}
	return k;
}
int main()
{
	int d,s,n;
//	freopen("543.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		if(n==0)break;
		d=0;
		for(s=3;s<=n/2;s+=2)
		{
			k=0;
			a==0;
			a=prime(s);
			if(a==1)continue;
			a=prime(n-s);
			if(a==1)continue;
			if(a==0)d=1;
			if(d==1)break;
		}
		if(d==1){printf("%d = %d + %d\n",n,s,n-s);continue;}
		else printf("Goldbach's conjecture is wrong.\n");
	}
	return 0;
}