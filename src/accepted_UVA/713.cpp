#include<stdio.h>
#include<string.h>
char a[201],b[201],c[201];

int main()
{
	int i,j,k,l,m,n,x;
//	freopen("713.txt","r",stdin);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		for(l=0;l<=201;l++)
		{
			a[l]=48;b[l]=48;c[l]=48;
		}
		scanf("%s %s\n",a,b);
		j=strlen(a);
		k=strlen(b);
		a[j]=48;
		b[k]=48;
		if(j>k)m=j;
		else m=k;
		x=0;
		for(l=0;l<m;l++)
		{
			if((c[l]-48+a[l]-48+b[l]-48)>=10)c[l+1]=49;
			c[l]=(c[l]-48+a[l]-48+b[l]-48)%10+48;
			if(c[l]==48&&x==0)continue;
			else {printf("%d",c[l]-48);x++;}
		}
		if(c[m]==49)printf("1");
		printf("\n");
	}
	return 0;
}
