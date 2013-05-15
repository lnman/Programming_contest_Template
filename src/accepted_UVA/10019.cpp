#include<stdio.h>
#include<math.h>

int main()
{
	int n,x,y,z=0,i,a,j;
//	freopen("10019.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		y=x;
		a=0;
		while(x)
		{
			if(x%2==1) a=a+1;
			x=x/2;
		}
		printf("%d",a);
		for(j=0;;j++)
		{
			z=z+((y%10)*pow(16,j));
			y=y/10;
			if(y<=0) break;}
		a=0;
		while(z)
		{
			if(z%2==1) a=a+1;
			z=z/2;
		}
		printf(" %d\n",a);
	}
	return 0;
}