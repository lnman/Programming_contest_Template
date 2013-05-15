#include<stdio.h>
#include<string.h>
char a[32];

int main()
{
	int i,j;
//	freopen("10921.txt","r",stdin);
	while(gets(a))
	{
		i=strlen(a);
		for(j=0;j<i;j++)
		{
			if(a[j]>='A'&&a[j]<='C')printf("2");
			else if(a[j]>='D'&&a[j]<='F')printf("3");
			else if(a[j]>='G'&&a[j]<='I')printf("4");
			else if(a[j]>='J'&&a[j]<='L')printf("5");
			else if(a[j]>='M'&&a[j]<='O')printf("6");
			else if(a[j]>='P'&&a[j]<='S')printf("7");
			else if(a[j]>='T'&&a[j]<='V')printf("8");
			else if(a[j]>='W'&&a[j]<='Z')printf("9");
			else printf("%c",a[j]);
		}
		printf("\n");
	}
	return 0;
}
