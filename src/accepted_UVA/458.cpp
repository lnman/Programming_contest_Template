#include<stdio.h>
#include<string.h>

int main()
{
	char c;
	int i;
//	freopen("r.txt","r",stdin);
	while(scanf("%c",&c)==1)
	{
			if(c!='\n')printf("%c",c-7);
			if(c=='\n'){
				printf("\n");
				continue;}
	}
	printf("\n");
	return 0;
}