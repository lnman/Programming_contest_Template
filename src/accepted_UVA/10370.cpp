#include<stdio.h>
float max[1001];
int main()
{
	int i,j,k,n;
	char ch='%';
	float a,res,avg;
//	freopen("r.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&k);
		for(j=1;j<=k;j++){
			scanf(" %f",&max[j]);}
		avg=0;
		for(j=1;j<=k;j++){
			avg=avg+max[j];
			if(j==k) avg=avg/k;
		}
		a=0;
		for(j=1;j<=k;j++){
			if(max[j]>avg) a=a+1;
		}
		res=a/k;
		printf("%.3f%c\n",res*100,ch);
	}
	return 0;
}

		
