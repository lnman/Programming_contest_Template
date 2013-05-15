#include<stdio.h>

int main()
{
	int a,b,c,d,f,g;
//	freopen("r.txt","r",stdin);
	while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
	{
		if(a==0&&b==0&&c==0&&d==0)break;
		if(b>d){c=c-1;}
		if(a>c)c=c+24;
		f=c-a;
		if(b>d){d=d+60;}
		g=f*60+(d-b);
		printf("%d\n",g);
	}
	return 0;
}