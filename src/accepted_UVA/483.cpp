#include<stdio.h>
#include<string.h>
char a[90000];
int i,j,k,l;

int main()
{
	freopen("483.txt","r",stdin);
	while(gets(a)){
	int x=strlen(a);
	for(i=0;i<x;i++)
	{
		if(a[i]==' '||a[i]=='\n')printf("%c",a[i]);
		else
		{
			for(k=i;k<x;k++)
			{
				if(a[k]==' '||a[k]=='\n')break;
			}
			for(j=k-1;j>=i;j--)
			{
				printf("%c",a[j]);
			}
			i=k-1;
		}
	}
	printf("\n");
	}
	return 0;
}