#include<stdio.h>
#include<string.h>
#include<math.h>
char ch[10],a;
int main()
{
	int i,j,k=0,l,m,n;
//	freopen("11878.txt","r",stdin);
	while(scanf("%d%c%d%s",&i,&a,&j,ch)==4)
	{
		if(ch[1]=='?')continue;
		m=strlen(ch);
		l=0;
		for(n=1;n<m;n++)
		{
			l=l+(ch[n]-48)*pow(10,m-n-1);
		}
		if(a=='+')if(i+j==l)k++;
		if(a=='-')if(i-j==l)k++;
	}
	printf("%d\n",k);
}