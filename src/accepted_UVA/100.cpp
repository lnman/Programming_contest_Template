#include<stdio.h>

int main()
{
	int i,j,n,m,a,p;
	while(scanf("%d%d",&i,&j)==2)
	{
		printf("%d %d",i,j);
		m=0;
		if(i>j){
			i=i+j;
			j=i-j;
			i=i-j;
		}
		for(n=i;n<=j;n){
			a=0;
			while(n){
				a=a+1;
				if(n==1) break;
				if(n%2==0) n=n/2;
				else n=3*n+1;
			}
			i++;
			n=i;
			if(a>m) m=a;
		}
		printf(" %d\n",m);
	}
	return 0;
}
