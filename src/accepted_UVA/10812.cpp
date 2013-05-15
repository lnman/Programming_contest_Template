#include<stdio.h>

int main()
{
	int n,i,j,k,l,m;
//	freopen("r.txt","r",stdin);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&j,&k);
		if((j%2==1&&k%2==0)||(j%2==0&&k%2==1)) printf("impossible\n");
		else if(j<k) printf("impossible\n");
		else{
			l=(j+k)/2;
			m=(j-k)/2;
			if(l>m) printf("%d %d\n",l,m);
			else printf("%d %d\n",m,l);
		}
	}
	return 0;
}