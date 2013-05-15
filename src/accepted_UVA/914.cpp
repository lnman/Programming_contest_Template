#include<stdio.h>
#include<math.h>
int a[10000];
int main()
{
	int i,j,k,l,m,n,x,p;
//	freopen("914.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(l=1;l<=10000;l++)
		{
			a[l]=0;
		}
		scanf("%d %d",&j,&k);
		if(j>k){x=j;j=k;k=x;}
		m=0;
		if(j<2)j=2;
		for(l=j;l<=k;l++)
		{
			p=0;x=sqrt(l);
			for(int y=2;y<=x;y++)
			{if(l%y==0){p=1;break;}}
			if(p==0&&l>1){m++;j=l;break;}
		}
		int q=l;
		if(j%2==0)j++;
		else j+=2;
		for(l=j;l<=k;l+=2)
		{
			p=0;x=sqrt(l);
			for(int y=3;y<=x;y+=2)
			{if(l%y==0){p=1;break;}}
			if(p==0){m++;a[l-q]++;q=l;}
		}
		if(m<2){printf("No jumping champion\n");continue;}
		x=0;
		p=0;
		q=0;
		for(l=1;l<=10000;l++)
		{
			if(a[l]>x){x=a[l];p=0;q=l;continue;}
			if(a[l]==x){p++;}
		}
		if(p==0&&x>0)printf("The jumping champion is %d\n",q);
		else printf("No jumping champion\n");
	}
	return 0;
}