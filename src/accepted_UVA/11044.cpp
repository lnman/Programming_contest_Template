#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&j,&k);
		printf("%d\n",(j/3)*(k/3));
	}
	return 0;
}