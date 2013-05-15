#include<stdio.h>
#include<math.h>
char a[100];
int main()
{
	int i,j,k;
//	freopen("11185.txt","r",stdin);
	while(scanf("%d",&i)==1)
	{
		if(i<0)break;
		k=0;
		j=0;
		while(i)
		{
			a[j++]=(i%3)+48;
			i=i/3;
		}
		if(j==0)printf("0");
		for(k=j-1;k>=0;k--)
		{
			printf("%c",a[k]);
		}
		printf("\n");
	}
	return 0;
}