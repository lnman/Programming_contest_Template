#include<stdio.h>

int main()
{
	 long long y,i,m,f,fm,s,x;
	 while(scanf("%lld",&y)==1&&y!=-1)
	 {
		 fm=1;
		 m=0;f=0;
		 s=0;
		 s=1;
		 for(i=1;i<=y;i++)
		 {
			 x=m;
			 m=fm+m+f;
			 f=x;
			 s=m+f+fm;
		 }
		 printf("%lld %lld\n",m,s);
	 }
	 return 0;
}