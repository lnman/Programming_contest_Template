#include<stdio.h>
#include<string.h>
char ch[1001];int a[129];
int main()
{
	int i,j,k,l,z=0;
	while(gets(ch))
	{
		i=strlen(ch);
		if(z!=0)printf("\n");
		z++;
		for(j=0;j<i;j++)
		{
			a[ch[j]]+=1;
		}
		for(j=0;j<=128;j++)
		{
			l=1000;int m=0;
			for(k=128;k>=0;k--)
			{
				if(a[k]>0&&a[k]<l){l=a[k];m=k;}
			}
			if(a[m]>0)printf("%d %d\n",m,a[m]);
			a[m]=0;
		}
	}
	return 0;
}