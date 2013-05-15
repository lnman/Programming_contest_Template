#include<stdio.h>
#include<string.h>
char a[25];

int main()
{
	int i,j,k,l,m;
//	freopen("739.txt","r",stdin);
	printf("         NAME                     SOUNDEX CODE\n");
	while(gets(a))
	{
		printf("         %s",a);
		i=strlen(a);
		for(j=i+10;j<35;j++)printf(" ");
		if(a[0])printf("%c",a[0]);
		l=0;
		m=0;
		for(j=0;j<i;j++)
		{
			if(a[j]=='A'||a[j]=='E'||a[j]=='I'||a[j]=='O'||a[j]=='U'||a[j]=='W'||a[j]=='Y'||a[j]=='H'){k=0;}
			else if(a[j]=='B'||a[j]=='P'||a[j]=='F'||a[j]=='V'){k=1;}
			else if(a[j]=='C'||a[j]=='S'||a[j]=='K'||a[j]=='G'||a[j]=='J'||a[j]=='Q'||a[j]=='X'||a[j]=='Z'){k=2;}
			else if(a[j]=='D'||a[j]=='T'){k=3;}
			else if(a[j]=='L'){k=4;}
			else if(a[j]=='M'||a[j]=='N'){k=5;}
			else if(a[j]=='R'){k=6;}
			if(j==0){l=k;continue;}
			if(k==l)continue;
			else if(k>0){printf("%d",k);m++;}
			l=k;
			if(m>=3)break;
		}
		for(m=m;m<3;m++)printf("0");
		printf("\n");
	}
	printf("                   END OF OUTPUT\n");
	return 0;
}