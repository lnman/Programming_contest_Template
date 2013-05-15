#include<stdio.h>

int main()
{
	int n,i,j,k,a,b,c;
//	freopen("r.txt","r",stdin);
	scanf("%d",&n);
	for(i=1;i<=n;i++){ scanf("%d\n%d\n\n",&j,&k);
			for(a=1;a<=k;a++)
			{
				for(b=1;b<=j;b++)
				{
					for(c=1;c<=b;c++) printf("%d",b);
					printf("\n");
				}
				for(b=j-1;b>=1;b--)
				{
					for(c=b;c>=1;c--) printf("%d",b);
					printf("\n");}
				if(i==n&&a==k)break;
				printf("\n");	
			}
		}
	return 0;
}