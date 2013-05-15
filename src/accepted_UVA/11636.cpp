#include<stdio.h>

int main()
{
	int a,b,i,j=1;
	while(scanf("%d",&a)==1)
	{
		if(a==1){printf("Case %d: 0\n",j++);continue;}
		if(a<1)break;
		b=1;
		for(i=1;;i++)
		{
			b=2*b;
			if(b>=a) break;
		}
		printf("Case %d: %d\n",j,i);
		j++;
	}
	return 0;
}
