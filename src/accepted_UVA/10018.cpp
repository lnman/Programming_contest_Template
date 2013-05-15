#include<stdio.h>
int m[15];

int main()
{
	long long i,j,k,n,a,b,c,d,f;
//	freopen("10018.txt","r",stdin);
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a);

		for(j=0;;j++)
		{
			b=a;
			k=1;
			f=0;
			while(b)
			{
				m[k++]=b%10;f=f*10+m[k-1];
				b=b/10;
			}
			k=k-1;
			if(a==f)d=0;
			else d=1;
			if(d==0){
			printf("%lld %lld\n",j,a);break;}
			else a=a+f;
		}
	}
	return 0;
}
