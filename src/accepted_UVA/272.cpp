#include<stdio.h>
char a[1000000];
int main()
{
	int i=0,j=0;
//	freopen("272.txt","r",stdin);
	while(scanf("%c",&a[i])==1)
	{
		if(a[i]=='"'&&j==0){printf("``");j=1;i++;continue;}
		if(a[i]=='"'&&j==1){printf("''");j=0;i++;continue;}
		printf("%c",a[i]);
		i++;
	}
}