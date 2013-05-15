#include<stdio.h>

int main()
{
	long long i,j,n,m,a,q=0,k;
//	freopen("371.txt","r",stdin);
	while(scanf("%lld%lld",&i,&j)==2&&(i!=0&&j!=0))
	{
		m=0;q=0;
		if(i>j){long long x=i;i=j;j=x;
		}
		k=i;
		for(n=i;n<=j;n++){
			a=0;
			i=n;
			while(i){		
				if(i%2==0) i=i/2;
				else i=3*i+1;
				
				a=a+1;
				if(i==1) break;
			}
			if(a>m) {m=a;q=n;}
		}
		printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",k,j,q,m);
	}
	return 0;
}

