#include<stdio.h>
#include<math.h>
int main()
{
	int a[17],n,j,k,l;
//	freopen("11743.txt","r",stdin);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=16;j++)
			scanf("%1d",&a[j]);
		k=0;l=0;
		for(j=1;j<=16;j++)
		{
			if(j%2==1){a[j]=a[j]*2;
			a[j]=(a[j]%10)+((a[j]/10)%10);
			k=k+a[j];}
			else l=l+a[j];
		}
		if((k+l)%10==0)printf("Valid\n");
		else printf("Invalid\n");
	}
	return 0;
}