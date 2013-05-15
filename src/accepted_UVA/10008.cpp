#include<stdio.h>
#include<string.h>
char a[27],s[10000];
int main()
{
	int n,i,j,k;
//	freopen("10008.txt","r",stdin);
	scanf("%d\n",&n);
	for(k=0;k<=27;k++)
	{
		a[k]=48;
	}
	for(i=1;i<=n;i++)
	{
		gets(s);
		j=strlen(s);
		for(k=0;k<j;k++)
		{
			if((s[k]>=65)&&(s[k]<=90))a[(s[k]-65)]+=1;
			if((s[k]>=97)&&(s[k]<=122))a[(s[k]-97)]+=1;
		}
	}
	for(k=0;k<25;k++)
	{
		int m=0;
		for(i=0;i<25;i++)
		{
			if(a[i]!=0&&a[i]>a[m])m=i;
		}
		if(a[m]-48!=0)printf("%c %d\n",m+65,a[m]-48);
		a[m]=0;
	}

}