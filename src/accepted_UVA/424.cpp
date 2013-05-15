#include<stdio.h>
#include<string.h>
int a[1000],s[1000],b[1000];
char d[120];
int main()
{
	int i,j,k,l,m=0,x;
//	freopen("424.txt","r",stdin);
	for(i=1;i<=100;i++)
	{
		scanf("%s",d);
		int z=strlen(d);
		if(z==1&&d[0]=='0')break;
		for(j=z-1;j>=0;j--)
		{
			a[j+1]=d[j]-48;
		}
		if(z>m)m=z;
		l=1;
		for(k=z;k>=1;k--)
		{
			b[l++]=a[k];
		}
		for(k=1;k<=m+10;k++)
		{
			if(s[k]+b[k]>9){s[k]=(s[k]+b[k])%10;s[k+1]=s[k+1]+1;continue;}
			if(s[k]+b[k]<10){s[k]=s[k]+b[k];}
		}
		for(k=z;k>=1;k--)
		{
			b[k]=0;
			a[k]=0;
		}
	}
	x=0;
	for(k=m+10;k>=1;k--)
	{
		if(s[k]>0)x=1;
		if(x==1)printf("%d",s[k]);
	}
	printf("\n");
	return 0;
}
