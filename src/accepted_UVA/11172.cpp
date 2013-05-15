#include<stdio.h>

int main()
{
	int a,b,i,n;
//	freopen("r.txt","r",stdin);
	scanf("%d",&n);
		for(i=1;i<=n;i++){
			scanf("%d%d",&a,&b);
			if(a>b) printf(">\n");
			if(a<b) printf("<\n");
			if(a==b) printf("=\n");
		}
	return 0;
}
