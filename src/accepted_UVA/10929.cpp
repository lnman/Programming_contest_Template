#include<stdio.h>
#include<string.h>
#include<math.h>
char b[1001];
int a[1001];
int main()
{
	int i;
//	freopen("10929.txt","r",stdin);
	while(1)
	{
		scanf("%s\n",b);
		int x=strlen(b);
		if(x==1&&b[0]=='0')break;
		for(i=0;i<x;i++)a[i]=b[i]-48;
		for(i=0;i<x-1;i++)
		{
			if(a[i]<11&&a[i]==0)continue;
			if(a[i]<11){a[i+1]=a[i]*10+a[i+1];}
			if(a[i+1]<11){i=i+1;a[i+1]=a[i]*10+a[i+1];}
			a[i+1]=a[i+1]%11;
		}
		if(a[i]==0)printf("is a multiple of 11.\n");
		else printf("is not a multiple of 11.\n");
	}
	return 0;
}