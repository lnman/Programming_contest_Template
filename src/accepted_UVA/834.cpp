#include<stdio.h>

int main()
{
	int i,j,k;
//	freopen("834.txt","r",stdin);
	while(scanf("%d %d",&i,&j)==2)
	{
		k=i/j;
		if(i%j==0){printf("[%d]\n",k);continue;}
		for(int f=2;f<=i;f)
		{
			if(i%f==0&&j%f==0){i=i/f;j=j/f;}
			else f++;
		}
		i=i%j;
		printf("[%d;",k);
		while(i!=1)
		{			
			printf("%d,",j/i);
			int x=i;i=j%i;j=x;
			for(int f=2;f<=i;f)
			{
			if(i%f==0&&j%f==0){i=i/f;j=j/f;}
			else f++;
			}
			i=i%j;
		}
		printf("%d]\n",j);
	}
	return 0;
}