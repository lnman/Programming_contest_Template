#include<stdio.h>
#include<string.h>

int h[6000],m[6000],l[5000][1200];
int x[6000],z;

int main()
{
	int n;
	for(z=0;z<1200;z++)x[z]=m[z]=h[z]=0;
	m[0]=1;
	for(int i=2;i<=5000;i++)
	{
		for(z=0;z<1200;z++)x[z]=m[z];
		int tmp=0;
		for(int k=0;k<1200;k++)
		{
			int tp=tmp;
			tmp=(m[k]+h[k]+tp)/10;
			m[k]=(m[k]+h[k]+tp)%10;	
		}
		for(z=0;z<1200;z++){h[z]=x[z];l[i][z]=m[z];}
	}
	while(scanf("%d",&n)==1)
	{
		if(n>5000||n<2){
			if(n==1)printf("The Fibonacci number for %d is 1\n",n);
			else printf("The Fibonacci number for %d is 0\n",n);
		}		
		else
		{
			printf("The Fibonacci number for %d is ",n);
			z=1199;
			while(l[n][z]==0){z--;}
			for(;z>=0;z--)printf("%d",l[n][z]);
			printf("\n");
		}
	}
	return 0;
}

