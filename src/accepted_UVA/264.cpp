#include<stdio.h>

int main()
{
	int i,j,k,m=0,n,a,b,l;
//	freopen("264.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		
		m++;
		k=0;
		l=1;
		m=1;
		for(i=1,j=1;k<=n;)
		{
			a=i,b=j;
			if(m%2==1){
				for(;a>0;)
				{
				k++;
				if(k==n)break;
				a--;
				b++;
				}
			}
			if(m%2==0)
			{
				for(;b>0;)
				{
				k++;
				if(k==n)break;
				a++;
				b--;
				}
			}
			if(k==n)break;
			if(m%2==0){l++;i=l;j=1;}
			if(m%2==1){l++,j=l;i=1;}
			m++;
		}
		printf("TERM %d IS %d/%d\n",n,a,b);
	}
	return 0;
}