#include<stdio.h>
int main()
{
	int x,y,j;
	int m;
	scanf("%d",&m);
	for(j=1;j<=m;j++){
		scanf("%d %d",&x,&y);
		if(y%x==0){printf("%d %d\n",x,y);continue;}		
		else printf("-1\n");
	}
	return 0;
}