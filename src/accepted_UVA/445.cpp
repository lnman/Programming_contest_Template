#include<stdio.h>

int main()
{
	int a=0,i,j,k;
	char c;
//	freopen("445.txt","r",stdin);
	while(scanf("%c",&c)==1)
	{
		if(c>='0'&&c<='9')a=a+c-48;
		else if((c>='A'&&c<='Z')||c=='*'){for(i=1;i<=a;i++)printf("%c",c);a=0;}
		else if(c=='b'){for(i=1;i<=a;i++)printf(" ");a=0;}
		else if(c=='!'){printf("\n");a=0;}
		else if(c=='\n'){printf("\n");a=0;}
	}
	return 0;
}