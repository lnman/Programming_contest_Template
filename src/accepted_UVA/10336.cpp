#include<stdio.h>
#include<string.h>
int a[26];char ch[20][20];
char c;
int i,j,k,l,m,n,p,f,g;


void rec(int f,int g)
{
	if(ch[f-1][g]==c){ch[f-1][g]=0;rec(f-1,g);}
	if(ch[f][g-1]==c){ch[f][g-1]=0;rec(f,g-1);}
	if(ch[f][g+1]==c){ch[f][g+1]=0;rec(f,g+1);}
	if(ch[f+1][g]==c){ch[f+1][g]=0;rec(f+1,g);}
}



int main()
{
//	freopen("10336.txt","r",stdin);
	scanf("%d\n",&i);
	for(j=1;j<=i;j++)
	{
		scanf("%d %d\n",&k,&l);
		for(m=0;m<k;m++)
			gets(ch[m]);
		for(n=0;n<k;n++)
		{
			for(p=0;p<l;p++)
			{
				int x=0;
				if(ch[n][p]>=97&&ch[n][p]<=122)
				{
					a[x+ch[n][p]-97]+=1;c=ch[n][p];ch[n][p]=0;rec(n,p);
				}
			}
		}
		printf("World #%d\n",j);
		for(int x=0;x<=25;x++)
		{
			int z=0;
			int f=0;
			for(int q=0;q<=25;q++)
			{
				if(z<a[q]){z=a[q];f=q;}
			}
			if(z>0)printf("%c: %d\n",f+97,z);
			a[f]=0;
		}
		for(int q=0;q<=26;q++)
		{
			a[q]=0;
		}
	}
	return 0;
}