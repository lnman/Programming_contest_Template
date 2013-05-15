#include<string.h>
#include<stdio.h>
#include<math.h>
char ch[10000],a[100][100];


int main()
{
	int i,j,k,l,m,n;
//	freopen("11716.txt","r",stdin);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		gets(ch);
		j=strlen(ch);
		double x;
		x=sqrt(j);
		if(floor(x)!=ceil(x))printf("INVALID");
		else 
		{
			m=0;
			for(k=0;k<x;k++)
				for(l=0;l<x;l++)
					a[k][l]=ch[m++];
			for(k=0;k<x;k++)
				for(l=0;l<x;l++)
					printf("%c",a[l][k]);
		}
		printf("\n");
	}
	return 0;
}