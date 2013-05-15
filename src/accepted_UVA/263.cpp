#include<stdio.h>
#include<math.h>
int a[11],x[1001];
int main()
{
	int i,j,k,n,m,p,b,c,d,f=0,l;
//	freopen("263.txt","r",stdin);
	while(scanf("%d",&n)==1 && n!=0)
	{
		printf("Original number was %d\n",n);
		int t=0;
		while(n)
		{
			t++;
			i=0;
			k=n;
			x[t]=n;
			while(n)
			{
				n=n/10;
				i=i+1;
			}
			for(j=1;j<=i;j++)
			{
				a[j]=k%10;
				k=k/10;
			}
			p=0;
			b=0;
			c=0;
			d=0;
			for(j=1;j<=i;j++)
			{
				for(m=1;m<=i;m++)
				{
					if(a[m]>=p){p=a[m];b=m;}
				}
				d=d+p*pow(10,i-j);
				c=c+p*pow(10,j-1);
				a[b]=0;
				p=0;
			}
			printf("%d - %d = %d\n",d,c,d-c);
			if(d-c==0){t++;printf("0 - 0 = 0\nChain length %d\n\n",t);continue;}
			for(l=1;l<=t;l++){
				if(d-c==x[l]){f=1;printf("Chain length %d\n\n",t);break;}}
			n=d-c;
			if(f==1){f=0;break;}
		}
	}
	return 0;
}