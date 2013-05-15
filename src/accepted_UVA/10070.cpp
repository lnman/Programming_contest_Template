#include<stdio.h>
#include<string.h>
#include<math.h>
char b[100000];
int a[100000];
int main()
{
	int n,i=0,j,k,y,z,d=0;;
//	freopen("10070.txt","r",stdin);
	while(scanf("%s",b)==1)
	{
		if(d!=0)printf("\n");d++;
		j=0;y=0,z=0;
		int x=strlen(b);
		for(i=0;i<x;i++)a[i]=b[i]-48;
		n=a[x-1]+a[x-2]*10+a[x-3]*100+a[x-4]*1000;
		k=a[x-1];
		if((n%4==0&&n%100!=0)||(n%400==0))j=1;
		if(j==1)
		{
			for(i=0;i<x-1;i++)
		{
			if(a[i]<55&&a[i]==0)continue;
			if(a[i]<55){a[i+1]=a[i]*10+a[i+1];}
			if(a[i+1]<55){i=i+1;a[i+1]=a[i]*10+a[i+1];}
			a[i+1]=a[i+1]%55;
		}
			if(a[i]==0)y=1;
		}
		if(k==0||k==5)
		{
			for(i=0;i<x;i++)a[i]=b[i]-48;
			for(i=0;i<x-1;i++)
			{
			if(a[i]<15&&a[i]==0)continue;
			if(a[i]<15){a[i+1]=a[i]*10+a[i+1];}
			if(a[i+1]<15){i=i+1;a[i+1]=a[i]*10+a[i+1];}
			a[i+1]=a[i+1]%15;
			}
			if(a[i]==0)z=1;
		}
		if(y==1&&z==1){printf("This is leap year.\nThis is huluculu festival year.\nThis is bulukulu festival year.\n");j=0;continue;}
		if(y==1&&z==0){printf("This is leap year.\nThis is bulukulu festival year.\n");j=0;continue;}
		if(y==0&&z==1&&j==1){printf("This is leap year.\nThis is huluculu festival year.\n");j=0;continue;}
		if(y==0&&z==1&&j==0){printf("This is huluculu festival year.\n");j=0;continue;}
		if(y==0&&z==0&&j==1){printf("This is leap year.\n");j=0;continue;}
		else printf("This is an ordinary year.\n");
		j=0;
	}
	return 0;
}