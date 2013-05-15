#include<stdio.h>
#include<math.h>
int a[32],b[32],j;
int main()
{
	unsigned int x,y,i,s;
	while(scanf("%d %d",&x,&y)==2)
	{
		s=0;
		for(i=0;i<=31;i++)
		{
			a[i]=x%2;b[i]=y%2;
			x=x/2;y=y/2;
			s=s+((a[i]+b[i])%2)*pow(2,i);
		}

		printf("%d\n",s);
	}
}