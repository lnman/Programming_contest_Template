#include<stdio.h>
#include<math.h>
#include<string.h>
char a[50],b[50];
int x,y,i,j,l=0,n;double p,q;
int rec(int n)
{
	int c=0;
	while(n)
	{
		c=c+n%10;
		n=n/10;
	}
	if(c>9){n=c;rec(n);}
	else return c;
}
int main()
{
	char ch='%';
//	freopen("10424.txt","r",stdin);
	while(gets(a)&&gets(b))
	{
		l=0;
		i=strlen(a);
		x=0;
		for(j=0;j<i;j++)
		{
			if(a[j]>=65&&a[j]<=90)x=x+a[j]-64;
			if(a[j]>=97&&a[j]<=122)x=x+a[j]-96;
		}
		n=x;
		p=rec(n);		
		i=strlen(b);
		y=0;
		for(j=0;j<i;j++)
		{
			if(b[j]>=65&&b[j]<=90)y=y+b[j]-64;
			if(b[j]>=97&&b[j]<=122)y=y+b[j]-96;
		}
		n=y;
		q=rec(n);
		if(p==0||q==0)printf("0.00 %c\n",ch);
		else if(q>p)printf("%.2lf %c\n",p*100/q,ch);
		else printf("%.2lf %c\n",q*100/p,ch);
		for(j=0;j<45;j++)
		{
			a[j]=0;b[j]=0;
		}
	}
	return 0;
}
