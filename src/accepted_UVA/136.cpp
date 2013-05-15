#include<stdio.h>

int main()
{
	int i,j=1,k,a;
	for(i=2;;i++)
	{
		a=i;
		for(k=2;k<=5;k)
		{
			if(k==4)k=k+1;
			if(i%k==0) i=i/k;
			else k++;
			if(i==1){
				j=j+1;
				break;
			}
		}
		i=a;
		if(j==1500){
			printf("The 1500'th ugly number is %d.",i);
			break;
		}
	}
	return 0;
}

