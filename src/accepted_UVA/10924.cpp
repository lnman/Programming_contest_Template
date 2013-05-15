#include<stdio.h>
#include<math.h>
#include<string.h>
char a[21];


int main()
{
	int x,i,j,l=0;
//	freopen("10924.txt","r",stdin);
	while(gets(a))
	{
		l=0;
		i=strlen(a);
		if(i==0)continue;
		x=0;
		for(j=0;j<i;j++)
		{
			if(a[j]>=65&&a[j]<=90)x=x+a[j]-38;
			if(a[j]>=97&&a[j]<=122)x=x+a[j]-96;
		}
		i=sqrt(x);
		for(j=2;j<=i;j++)
		{
			if(x%j==0){l=1;break;}
		}
		if(l==1)printf("It is not a prime word.\n");
		else printf("It is a prime word.\n");
	}
	return 0;
}