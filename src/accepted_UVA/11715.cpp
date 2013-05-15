#include<stdio.h>
#include<math.h>

int main()
{
	double j,k,l,f,x;
	int n,i=1;
//	freopen("11715.txt","r",stdin);
	while(scanf("%d",&n)==1&&n!=0)
	{
		scanf("%lf %lf %lf",&j,&k,&l);
		switch(n)
		{
		case 1:
			x=(k-j)/l;
			f=(k*k-j*j)/(2*x);
			printf("Case %d: %.3lf %.3lf\n",i++,f,x);
			break;
		case 2:
			x=(k-j)/l;
			f=(k*k-j*j)/(2*l);
			printf("Case %d: %.3lf %.3lf\n",i++,f,x);
			break;
		case 3:
			x=j*j+2*k*l;
			x=sqrt(x);
			f=(x-j)/k;
			printf("Case %d: %.3lf %.3lf\n",i++,x,f);
			break;
		case 4:
			x=j*j-2*k*l;
			x=sqrt(x);
			f=(j-x)/k;
			printf("Case %d: %.3lf %.3lf\n",i++,x,f);
			break;
		}
	}
	return 0;
}