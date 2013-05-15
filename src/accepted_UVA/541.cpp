#include<stdio.h>
int a[105][105];
int main()
{
	int n,i,j,k,b,c,d,s,f,g,h,l;
//	freopen("541.txt","r",stdin);
	while(scanf("%d",&n)==1)
	{
		if(n==0)break;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		b=0;c=0;d=0;h=0;l=0;
		for(i=1;i<=n;i++)
		{
				s=0;k=0;
			for(j=1;j<=n;j++)
			{
				s=s+a[j][i];
				k=k+a[i][j];
			}
			if(b>1||c>1){d=1;break;}
			if(k%2==1)b++;
			if(s%2==1)c++;
			if(b==1&&h==0){f=i;h++;}
			if(c==1&&l==0){g=i;l++;}
		}
		if(b==0&&c==0){printf("OK\n");}
		if(b==1&&c==1){printf("Change bit (%d,%d)\n",f,g);}
		if(d==1){printf("Corrupt\n");}
	}
	return 0;
}