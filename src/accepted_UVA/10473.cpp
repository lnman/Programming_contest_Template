#include<stdio.h>
#include<string.h>
#include<math.h>
char ah[20];int b[20];

int main()
{
	int i,j,k,l;
	char ch[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
//	freopen("10473.txt","r",stdin);
	while(scanf("%s",ah)==1&&ah[0]!='-')
	{
		i=strlen(ah);
		if(i==0)continue;
		if(ah[0]=='0'&&ah[1]=='x')
		{
			k=0;
			for(j=2;j<i;j++)
			{
				for(l=0;l<16;l++)
					if(ch[l]==ah[j]){k=k+l*pow(16,i-j-1);break;}
			}
			printf("%d\n",k);
		}
		else
		{
			k=0;
			for(j=0;j<i;j++)
			{
				for(l=0;l<16;l++)
					if(ch[l]==ah[j]){k=k+l*pow(10,i-j-1);break;}
			}
			printf("0x");
			if(k==0)printf("0");
			j=0;
			while(k)
			{
				b[j++]=k%16;
				k=k/16;
			}
			for(l=j-1;l>=0;l--)
			{
				printf("%c",ch[b[l]]);
			}
			printf("\n");
		}
	}
	return 0;
}