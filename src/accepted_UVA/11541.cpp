#include<stdio.h>
#include<string.h>
char ch;
int main()
{
	int i,j,k,l,n;
//	freopen("11541.txt","r",stdin);
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		printf("Case %d: ",i);
		for(j=1;;j++)
		{
			scanf("%c",&ch);
			if(ch=='\n'){printf("\n");break;}
			else 
			{
				scanf("%d",&k);
				for(l=1;l<=k;l++)printf("%c",ch);
			}
		}
	}
	return 0;
}