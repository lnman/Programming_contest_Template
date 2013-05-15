#include<stdio.h>
#include<string.h>
char a[15][26];int b[15];
int main()
{
	int i,j,k,l,n;
//	freopen("414.txt","r",stdin);
	while(scanf("%d\n",&n)==1&&n!=0)
	{
		for(i=0;i<n;i++)gets(a[i]);
		l=0;
		for(i=0;i<n;i++)
		{
			k=0;
			for(j=0;j<25;j++)if(a[i][j]=='X')k++;
			b[i]=k;
			if(l<k)l=k;
		}
		j=0;
		for(i=0;i<n;i++)j=j+l-b[i];
		printf("%d\n",j);
	}
	return 0;
}