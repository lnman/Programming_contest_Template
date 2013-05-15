#include<stdio.h>

int main()
{
	char a;
	int b=0,c=0,d=0,i=0,j=0,k=0;
//	freopen("10260.txt","r",stdin);
	while(scanf("%c",&a)==1)
	{
		if((a=='B'||a=='F'||a=='P'||a=='V')&&b!=1){printf("1");b=1,c=0,d=0,i=0,j=0,k=0;}
		else if((a=='B'||a=='F'||a=='P'||a=='V')&&b==1){continue;}
		else if((a=='C'||a=='G'||a=='J'||a=='K'||a=='Q'||a=='S'||a=='X'||a=='Z')&&c!=1){printf("2");b=0,c=1,d=0,i=0,j=0,k=0;}
		else if((a=='C'||a=='G'||a=='J'||a=='K'||a=='Q'||a=='S'||a=='X'||a=='Z')&&c==1){continue;}
		else if((a=='D'||a=='T')&&d!=1){printf("3");b=0,c=0,d=1,i=0,j=0,k=0;}
		else if((a=='D'||a=='T')&&d==1){continue;}
		else if(a=='L'&&i!=1){printf("4");b=0,c=0,d=0,i=1,j=0,k=0;}
		else if(a=='L'&&i==1){continue;}
		else if((a=='M'||a=='N')&&j!=1){printf("5");b=0,c=0,d=0,i=0,j=1,k=0;}
		else if((a=='M'||a=='N')&&j==1){continue;}
		else if(a=='R'&&k!=1){b=0,c=0,d=0,i=0,j=0,k=1;printf("6");}
		else if(a=='R'&&k==1){continue;}
		else if(a=='\n'||a==' '){printf("\n");b=0,c=0,d=0,i=0,j=0,k=0;}
		else {b=0,c=0,d=0,i=0,j=0,k=0;}
	}
	return 0;
}