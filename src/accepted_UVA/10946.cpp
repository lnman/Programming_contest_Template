#include<stdio.h>
int a[27][1500];char ch[60][60];
char c;
int j,k,l,n,p,q,o;

void rec(int r,int s)
{
	int f=r,g=s;
	if(f<=k&&g<=l&&g>=0&&f>=0)
	{
	if(ch[f-1][g]==c){a[c-65][o]+=1;ch[f-1][g]=0;rec(f-1,g);}
	if(ch[f][g-1]==c){a[c-65][o]+=1;ch[f][g-1]=0;rec(f,g-1);}
	if(ch[f][g+1]==c){a[c-65][o]+=1;ch[f][g+1]=0;rec(f,g+1);}
	if(ch[f+1][g]==c){a[c-65][o]+=1;ch[f+1][g]=0;rec(f+1,g);}
	}
}

int main()
{
	j=1;
//	freopen("10946.txt","r",stdin);
	while(scanf("%d %d\n",&k,&l)==2)
	{
		if(k==0||l==0)break;
		for(n=0;n<k;n++)gets(ch[n]);
		for(n=0;n<k;n++)
		{
			for(p=0;p<l;p++)
			{
				if(ch[n][p]>=65&&ch[n][p]<=90)
				{
					for(o=0;o<200;o++)
					{
						if(a[ch[n][p]-65][o]==0)
						{
							a[ch[n][p]-65][o]+=1;
							c=ch[n][p];
							ch[n][p]=0;
							rec(n,p);
							break;
						}
					}
				}
			}
		}
		printf("Problem %d:\n",j++);
		for(n=0;;n++)
		{
			int z=0;
			int g=0,f=0;
			for(q=0;q<=25;q++)
			{
				for(p=0;p<1500;p++)
					if(z<a[q][p]){z=a[q][p];f=q;g=p;}
			}
			if(z>0)printf("%c %d\n",f+65,z);
			else break;
			a[f][g]=0;
		}
		for(n=0;n<27;n++)
		{for(p=0;p<1500;p++)
		a[n][p]=0;}
	}
	return 0;
}
