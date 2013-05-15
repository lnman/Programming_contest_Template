#include<stdio.h>
#include<string.h>
#include<math.h>
char a[1000000];
int main()
{
	unsigned int i,j,k;
//	freopen("575.txt","r",stdin);
	while(scanf("%s",a)==1)
	{
		i=strlen(a);
		if(i==1&&a[0]==48)break;
		k=0;
		for(j=1;j<=i;j++)
		{
			k=k+(a[j-1]-48)*(pow(2,i-j+1)-1);
		}
		printf("%d\n",k);
	}
	return 0;
}