#include<stdio.h>

int main()
{
	float x,y,z;
//	freopen("579.txt","r",stdin);
	while(scanf("%f:%f",&x,&y)==2)
	{
		z=x+(y/60)-(y/5);
		if(x==0&&y==0)break;
		if(x+(y/60)-(y/5)<0){z=-z;}
		if((z*30)>180)printf("%.3f\n",360-z*30);
		else printf("%.3f\n",z*30);
	}
	return 0;
}