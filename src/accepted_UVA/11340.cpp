#include<stdio.h>
#include<string.h>
char a[101],ch[1][10001];
int b[101];

int main()
{
	int i,j,k,l,n;
	double m;
//	freopen("11340.txt","r",stdin);
	scanf("%d\n",&i);
	for(j=1;j<=i;j++)
	{
		int x;
		scanf("%d\n",&x);
		for(k=1;k<=x;k++)
		{
			scanf("%c %d\n",&a[k],&b[k]);
		}
		scanf("%d\n",&l);
		m=0;
		for(k=0;k<l;k++)
		{
			gets(ch[0]);
			int p=strlen(ch[0]);
			for(n=0;n<p;n++)
			{
				for(int z=1;z<=x;z++)
				{
					if(ch[0][n]==a[z]){m=m+b[z];break;}
				}
			}
		}
		double f=m/100;
		printf("%.2lf$\n",f);
	}
	return 0;
}
