#include<stdio.h>
#include<stdlib.h>
int a[10001];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int i=0,j,k,l;
	while(scanf("%d",&a[i])==1)
	{
		qsort (a,i+1, sizeof(int), compare);
		if(i%2==0)printf("%d\n",a[i/2]);
		else printf("%d\n",(a[i/2]+a[(i+1)/2])/2);
		i++;
	}
}