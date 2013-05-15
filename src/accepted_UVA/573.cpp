#include<stdio.h>

int main()
{
	float h,u,d,f,i=0,j=0,k=0;
//	freopen("573.txt","r",stdin);
	while(scanf("%f %f %f %f",&h,&u,&d,&f)==4&&h!=0)
	{
		i=0;
		float x=u;
		for(j=1;;j++)
		{
			if(j==1)i=i+u;
			else{
				k=u-(x*f/100);
				if(u-(x*f/100)<=0)k=0;
				i=i+k;	
			}
			if(i>h){printf("success on day %.0f\n",j);break;}
			i=i-d;
			if(i<0){printf("failure on day %.0f\n",j);break;}
			if(j>1)u=k;
		}
	}
}