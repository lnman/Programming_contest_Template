#include<stdio.h>
#include<stdlib.h>
long long a[4],b;
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
		printf("Case %d: ",i);
		if(a[1]>a[2]){b=a[1];a[1]=a[2];a[2]=b;}
		if(a[0]>a[1]){b=a[0];a[0]=a[1];a[1]=b;}
		if(a[1]>a[2]){b=a[1];a[1]=a[2];a[2]=b;}
		if(a[0]<1||a[1]<1||a[2]<1||a[0]+a[1]<=a[2])printf("Invalid\n");
		else if(a[0]==a[1]&&a[1]==a[2])printf("Equilateral\n");
		else if(a[0]==a[1]||a[1]==a[2])printf("Isosceles\n");
		else printf("Scalene\n");
	}
	return 0;

}
