#include<stdio.h>
#include<string.h>
char a[129],b[12];
int main()
{
	int i,j,k,l,n,c,d,m,x;
//	freopen("673.txt","r",stdin);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		m=0;
		x=0;
		while(scanf("%c",&a[x++])==1&&a[x-1]!='\n'){}
		l=x-1;
		if(l%2==1){printf("No\n");continue;}
		c=0;
		d=0;
		for(j=1;j<=l/2;j++)
		{
			for(k=0;k<l;k++)
			{
				if(a[k]=='(')c=k;
				if(a[k]=='[')d=k;
			}
			for(k=c;k<l;k++)
			{
				if(a[k]==')'){a[c]=0;a[k]=0;
				if((k-c-1)%2==1)m=1;break;}
			}
			for(k=d;k<l;k++)
			{
				if(a[k]==']'){a[d]=0;a[k]=0;if((k-d-1)%2==1)m=1;break;}
			}

		}
		for(j=0;j<l;j++)
		{
			if(a[j]=='('||a[j]==')'||a[j]=='['||a[j]==']'){m=1;break;}
		}
		if(m==1)printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}