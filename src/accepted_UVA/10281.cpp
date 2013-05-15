#include<stdio.h>

 
float s=0,p,k,l,v,a=0,b=0,c=0,d,e,f,i,j,n,m;
char z;
int main()
{
	//printf("%f",s);
//	freopen("10281.txt","r",stdin);
//	scanf("%d:%d:%d %d",&a,&b,&c,&v);
	while(scanf("%f:%f:%f",&d,&e,&f)==3){
		i=d*1.0;j=e*1.0;n=f;
		p=f-c;
		if(p<0){p=60+p;e=e-1;}
		k=e-b;
		if(k<0){k=60+k;d=d-1;}
		l=d-a;
		s=s+l*v+(k*v)/60.0+(p*v)/3600.0;
		//printf("%f\n",s);
		a=i;b=j;c=n;
		scanf("%c",&z);
		if(z=='\n'){
			if(i<10)printf("0%.0f:",i);
			else printf("%.0f:",i);
			if(j<10)printf("0%.0f:",j);
			else printf("%.0f:",j);
			if(n<10)printf("0%.0f",n);
			else printf("%.0f",n);
			printf(" %.2f km\n",s);
		}
		if(z==' ')scanf("%f",&v);
		//printf("%d %d %d %d %f",l,k,p,v,v/60*k);
	}
	return 0;
}





