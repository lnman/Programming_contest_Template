#include<stdio.h>
int a[10],s[9];
int main()
{
	int i,j,k,s1,s2,s3;
//	freopen("102.txt","r",stdin);
	while(scanf("%d %d %d %d %d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9])==9)
	{
		s[1]=a[7]+a[4]+a[3]+a[9]+a[2]+a[5];
		s[2]=a[6]+a[9]+a[1]+a[7]+a[2]+a[5];
		s[3]=a[5]+a[8]+a[1]+a[7]+a[3]+a[6];
		s[4]=a[7]+a[4]+a[2]+a[8]+a[3]+a[6];
		s[5]=a[6]+a[9]+a[2]+a[8]+a[1]+a[4];
		s[6]=a[5]+a[8]+a[3]+a[9]+a[1]+a[4];
		j=s[1];k=1;
		for(i=1;i<=6;i++)
		{
			if(s[i]<j){j=s[i];k=i;}
		}
		if(k==1)printf("BCG %d\n",j);
		if(k==2)printf("CBG %d\n",j);
		if(k==3)printf("GBC %d\n",j);
		if(k==4)printf("BGC %d\n",j);
		if(k==5)printf("CGB %d\n",j);
		if(k==6)printf("GCB %d\n",j);
	}
}