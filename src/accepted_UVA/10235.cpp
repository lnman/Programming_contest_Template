#include<stdio.h>
#include<math.h>
int main()
{
	long int n,i,j,k,m,l,a,b;
//	freopen("10235.txt","r",stdin);
	while(scanf("%ld",&n)==1)
	{
		if(n==0){printf("%ld is not prime.\n",n);continue;}
		j=0;
		a=n;
		b=n;
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{ j=1;
			break;
			}

		}

		if(j==1){printf("%ld is not prime.\n",b);continue;}
		else
		{
			l=0;
			while(a){a=a/10;l=l+1;}
			m=0;
			for(k=1;;k++)
			{
				m=m+((n%10)*pow(10,l-k));
				n=n/10;
				if(l-k==0)break;
			}
			for(i=2;i<=sqrt(m);i++)
			{
			if(m%i==0) j=2;
			if(j==2)break;
			}
			if(b==m&&j==0){printf("%ld is prime.\n",b);continue;}
			if(j==0){printf("%ld is emirp.\n",b);continue;}
			if(j==2){printf("%ld is prime.\n",b);continue;}
		}
	}
	return 0;
}
