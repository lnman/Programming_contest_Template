#include<stdio.h>
#include<string.h>
char ch[201][201];
int i,j,k,l,m,n,o,p,f,g;

int recb(int k,int l)
{
	int m=k,n=l;
	if(m==p){g=1;return g;}
	else 
	{
		if(ch[m-1][n-1]=='b'&&n-1>=0&&m-1>=0){ch[m-1][n-1]=0;recb(m-1,n-1);}
		if(ch[m-1][n]=='b'&&n>=0&&m-1>=0){ch[m-1][n]=0;recb(m-1,n);}
		if(ch[m][n-1]=='b'&&n-1>=0){ch[m][n-1]=0;recb(m,n-1);}
		if(ch[m][n+1]=='b'&&n+1<=p){ch[m][n+1]=0;recb(m,n+1);}
		if(ch[m+1][n]=='b'&&m+1<=p&&n<=p){ch[m+1][n]=0;recb(m+1,n);}
		if(ch[m+1][n+1]=='b'&&m+1<=p&&n+1<=p){ch[m+1][n+1]=0;recb(m+1,n+1);}
	}
}


int main()
{
	int a,b=0,c;
	freopen("260.txt","r",stdin);
	while(scanf("%d\n",&a)==1&&a!=0)
	{
		for(c=0;c<a;c++)
		{
			gets(ch[c]);
		}
		p=a-1;
		b++;f=0,g=0;
		for(c=0;c<a;c++)
		{
			if(ch[0][c]=='b'){ch[0][c]=0;recb(0,c);}
			if(g==1)break;
		}
		if(g==1)printf("%d B\n",b);
		else printf("%d W\n",b);
	}
	return 0;
}