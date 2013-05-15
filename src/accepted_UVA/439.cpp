#include<stdio.h>

int a[8][8],b,c,ah,j=0,k;
char ch,bh,baal[10];
void rec(int n,int m,int k)
{
	if(n<0||n>7||m<0||m>7){}
	else if(k<ah)
	{
		if(n+1==bh-97&&m+2==b-1)ah=k+1;
		else if(n+1==bh-97&&m-2==b-1)ah=k+1;
		else if(n-1==bh-97&&m-2==b-1)ah=k+1;
		else if(n-1==bh-97&&m+2==b-1)ah=k+1;
		else if(n-2==bh-97&&m-1==b-1)ah=k+1;
		else if(n-2==bh-97&&m+1==b-1)ah=k+1;
		else if(n+2==bh-97&&m-1==b-1)ah=k+1;
		else if(n+2==bh-97&&m+1==b-1)ah=k+1;
		else{
		rec(n+1,m-2,k+1);
		rec(n+1,m+2,k+1);
		rec(n-1,m-2,k+1);
		rec(n-1,m+2,k+1);
		rec(n-2,m-1,k+1);
		rec(n-2,m+1,k+1);
		rec(n+2,m-1,k+1);
		rec(n+2,m+1,k+1);}
	}
}

int main()
{
//	freopen("439.txt","r",stdin);
	while(gets(baal))
	{
		ch=baal[0];c=baal[1]-48;
		bh=baal[3];b=baal[4]-48;
		if(ch==bh&&c==b){printf("To get from %c%d to %c%d takes 0 knight moves.\n",ch,c,bh,b);continue;}
		else
		{
			ah=8;
			rec(ch-97,c-1,0);
			printf("To get from %c%d to %c%d takes %d knight moves.\n",ch,c,bh,b,ah);
		}
	}
	return 0;
}