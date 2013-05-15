#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
	int a[3],i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&a[0],&a[1],&a[2]);
		qsort (a, 3, sizeof(int), compare);
		printf("Case %d: %d\n",i,a[1]);
	}
	return 0;
}