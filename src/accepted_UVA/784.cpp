#include<stdio.h>
#include<string.h>
char ch[31][81];
int n,i,j,k,l,m,f,g;

void rec(int f,int g)
{
	if(ch[f-1][g]==' '){ch[f-1][g]='#';rec(f-1,g);}
	if(ch[f][g-1]==' '){ch[f][g-1]='#';rec(f,g-1);}
	if(ch[f][g+1]==' '){ch[f][g+1]='#';rec(f,g+1);}
	if(ch[f+1][g]==' '){ch[f+1][g]='#';rec(f+1,g);}
}

int main()
{
//	freopen("784.txt","r",stdin);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;;j++)
		{
			gets(ch[j]);
			if(ch[j][0]=='_')break;
		}
		for(k=0;k<=j;k++)
		{
			m=strlen(ch[k]);
			for(l=0;l<m;l++)
			{
				if(ch[k][l]=='*'){ch[k][l]='#';rec(k,l);}
			}
		}
		for(k=0;k<=j;k++)
		{
			m=strlen(ch[k]);
			for(l=0;l<m;l++)
			{
				printf("%c",ch[k][l]);
			}
			printf("\n");
		}
	}
	return 0;
}