#include<stdio.h>
#include<string.h>

char a[110];
int main()
{
	int i,j,k,l,n;
//	freopen("11530.txt","r",stdin);
	scanf("%d",&n);
	gets(a);
	for(i=1;i<=n;i++)
	{
		gets(a);
		j=strlen(a);
		l=0;
		for(k=0;k<j;k++)
		{
			if(a[k]=='a'||a[k]=='d'||a[k]=='g'||a[k]=='j'||a[k]=='m'||a[k]=='p'||a[k]=='t'||a[k]=='w'||a[k]==' ')l=l+1;
			else if(a[k]=='b'||a[k]=='e'||a[k]=='h'||a[k]=='k'||a[k]=='n'||a[k]=='q'||a[k]=='u'||a[k]=='x')l=l+2;
			else if(a[k]=='c'||a[k]=='f'||a[k]=='i'||a[k]=='l'||a[k]=='o'||a[k]=='r'||a[k]=='v'||a[k]=='y')l=l+3;
			else if(a[k]=='s'||a[k]=='z')l=l+4;
		}
		printf("Case #%d: %d\n",i,l);
	}
	return 0;
}