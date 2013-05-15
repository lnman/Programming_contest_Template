#include<stdio.h>
#include<string.h>
char a[25];
int main()
{
	int i,j,k,b,c,d;
//	freopen("401.txt","r",stdin);
	while(scanf("%s",a)==1)
	{
		k=strlen(a);	
		b=0;
		for(i=1;i<=k/2;i++)
		{
			if(a[i-1]!=a[k-i]){b=1;break;}
		}
		c=0;d=0;
		j=0;
		for(i=1;i<=k;i++)
		{
			if(a[i-1]=='A'||a[i-1]=='3'||a[i-1]=='H'||a[i-1]=='I'||a[i-1]=='L'||a[i-1]=='J'||a[i-1]=='M'||a[i-1]=='O'||a[i-1]=='2'||a[i-1]=='T'||a[i-1]=='U'||a[i-1]=='V'||a[i-1]=='W'||a[i-1]=='X'||a[i-1]=='Y'||a[i-1]=='5'||a[i-1]=='1'||a[i-1]=='S'||a[i-1]=='E'||a[i-1]=='Z'||a[i-1]=='8')continue;
			else{j++;if(j==1)d=i-1;else {c=1;break;}}
		}
		if(j==1&&c!=1){
			if(k%2==0)c=1;
			else {if(d!=(k/2)+1)c=1;}
		}
		if(c==0)
		{
			for(i=1;i<=k/2;i++)
			{
				if(a[i-1]=='A'){if(a[k-i]=='A')continue;else {c=1;break;}}
				if(a[i-1]=='E'){if(a[k-i]=='3')continue;else {c=1;break;}}
				if(a[i-1]=='H'){if(a[k-i]=='H')continue;else {c=1;break;}}
				if(a[i-1]=='I'){if(a[k-i]=='I')continue;else {c=1;break;}}
				if(a[i-1]=='J'){if(a[k-i]=='L')continue;else {c=1;break;}}
				if(a[i-1]=='L'){if(a[k-i]=='J')continue;else {c=1;break;}}
				if(a[i-1]=='M'){if(a[k-i]=='M')continue;else {c=1;break;}}
				if(a[i-1]=='O'){if(a[k-i]=='O')continue;else {c=1;break;}}
				if(a[i-1]=='S'){if(a[k-i]=='2')continue;else {c=1;break;}}
				if(a[i-1]=='T'){if(a[k-i]=='T')continue;else {c=1;break;}}
				if(a[i-1]=='U'){if(a[k-i]=='U')continue;else {c=1;break;}}
				if(a[i-1]=='V'){if(a[k-i]=='V')continue;else {c=1;break;}}
				if(a[i-1]=='W'){if(a[k-i]=='W')continue;else {c=1;break;}}
				if(a[i-1]=='X'){if(a[k-i]=='X')continue;else {c=1;break;}}
				if(a[i-1]=='Y'){if(a[k-i]=='Y')continue;else {c=1;break;}}
				if(a[i-1]=='Z'){if(a[k-i]=='5')continue;else {c=1;break;}}
				if(a[i-1]=='1'){if(a[k-i]=='1')continue;else {c=1;break;}}
				if(a[i-1]=='2'){if(a[k-i]=='S')continue;else {c=1;break;}}
				if(a[i-1]=='3'){if(a[k-i]=='E')continue;else {c=1;break;}}
				if(a[i-1]=='5'){if(a[k-i]=='Z')continue;else {c=1;break;}}
				if(a[i-1]=='8'){if(a[k-i]=='8')continue;else {c=1;break;}}
			}
		}
		printf("%s -- ",a);
		if(b==1&&c==1)printf("is not a palindrome.\n\n");
		if(b==0&&c==1)printf("is a regular palindrome.\n\n");
		if(b==1&&c==0)printf("is a mirrored string.\n\n");
		if(b==0&&c==0)printf("is a mirrored palindrome.\n\n");
	}
	return 0;
}