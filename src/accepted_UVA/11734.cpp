#include<stdio.h>
#include<string.h>
char a[25],b[25];
int main()
{
	int i,j,k,l,m,n;
//	freopen("11734.txt","r",stdin);
	scanf("%d\n",&m);
	for(i=1;i<=m;i++)
	{
		gets(a);
		gets(b);
		j=strlen(a);
		a[j]='\n';
		printf("Case %d: ",i);
		k=0;
		l=0;
		n=0;
		for(j=0;;j++)
		{
			if(a[j]=='\n')break;
			if(a[j]==' '){n=1;continue;}
			if(a[j]==b[k++])continue;
			else {l=1;break;}
		}
		if(b[k]!=0)l=1;
		if(l==1)printf("Wrong Answer\n");
		else if(n==1)printf("Output Format Error\n");
		else printf("Yes\n");
	}
	return 0;
}