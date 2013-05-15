#include<stdio.h>
#include<string.h>
#include<math.h>
char ch[2009];
int a[130];
int main()
{
	int i,j,k,l,m,n,p;
//	freopen("10789.txt","r",stdin);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		gets(ch);
		j=strlen(ch);
		for(k=0;k<j;k++)
		{
			a[ch[k]]+=1;
		}
		printf("Case %d: ",i);
		p=0;
		for(k=0;k<=125;k++)
		{
			if(a[k]>1)
			{
				m=0;
				j=sqrt(a[k]);
				for(l=2;l<=j;l++)
				{if(a[k]%l==0)m=1;}
				if(m==0){printf("%c",k);p++;}
			}
		}
		if(p==0)printf("empty");
		for(k=0;k<=125;k++)a[k]=0;
		printf("\n");
	}
	return 0;
}