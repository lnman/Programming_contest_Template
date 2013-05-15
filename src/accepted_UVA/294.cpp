#include<stdio.h>
#include<math.h>
int a[10001];
int main()
{
	int i,j,k,l,n,x,f;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&j,&k);
		f=0;
		for(l=j;l<=k;l++)
		{
			x=sqrt(l);
			for(int p=1;p<=x;p++)
			{
				if(l%p==0)
				{
					a[f]++;
					if(l/p>x)a[f]++;}
			}
			f++;
		}
		x=0;
		for(l=0;l<=k-j;l++)
		{
			if(a[l]>x){x=a[l];f=l;}
			a[l]=0;
		}
		printf("Between %d and %d, %d has a maximum of %d divisors.\n",j,k,f+j,x);
	}
	return 0;
}

