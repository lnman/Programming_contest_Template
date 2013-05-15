#include<stdio.h>
#include<string.h>

int main()
{
	int temp,low=0,high=11,k;
//	freopen("10530.txt","r",stdin);
	char ch[10];
	while(scanf("%d\n",&temp)==1&&(gets(ch))&&temp!=0)
	{
		if(strcmp(ch,"too high")==0)k=1;
		if(strcmp(ch,"too low")==0)k=2;
		if(strcmp(ch,"right on")==0)k=3;
		switch(k)
		{
		case 1:
			if(temp<high)high=temp;
			break;
		case 2:
			if(temp>low)low=temp;
			break;
		case 3:
			if(temp<high&&temp>low)printf("Stan may be honest\n");
			else printf("Stan is dishonest\n");
			low=0,high=11;
			break;
		}
	}
	return 0;
}