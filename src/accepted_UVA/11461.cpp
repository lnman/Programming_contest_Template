#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k,x;
	double d;
	while(scanf("%d %d",&i,&j)==2)
	{
		d=sqrt(i);
		k=sqrt(j);
		if(floor(d)<d) x=d;
		else x=d-1;
		printf("%d\n",k-x);
	}
	return 0;
}