#include<stdio.h>

int main()
{
	char a;int j=0,i=0;
//	freopen("494.txt","r",stdin);
	while(scanf("%c",&a)==1)
	{
		if(a=='\n'){printf("%d\n",j);j=0;i=0;}
		if(((a>=65&&a<=90)||(a>=97&&a<=122))&&i==0){j++;i=1;}
		if(((a>=65&&a<=90)||(a>=97&&a<=122))&&i==1){continue;}
		else i=0;
	}
	return 0;
}