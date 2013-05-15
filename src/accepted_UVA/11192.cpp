#include<stdio.h>
#include<string.h>
char a[110];
int main()
{
	int i,j,k,l,n;
//	freopen("11192.txt","r",stdin);
	while(scanf("%d ",&i)==1&&i!=0)
	{
		gets(a);
		l=strlen(a);
		i=l/i;
		k=0;n=0;
		for(j=0;j<l;j++)
		{
			k++;
			if(k==i)
			{
				for(int x=j;x>=n;x--)
			    printf("%c",a[x]);
			    k=0;
				n=j+1;
			}
		}
		printf("\n");
	}
	return 0;
}