#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,l,n;
//	freopen("10699.txt","r",stdin);
	
	while(scanf("%d",&n)==1&&n!=0)
	{
		printf("%d : ",n);
		k=0;
		l=0;
		j=n;
		for(i=2;i<=n;i)
		{
			if(j%i==0){if(l==0)k++;l++;j=j/i;}
			else {i++;l=0;}
		}
		printf("%d\n",k);
	}
	return 0;

}