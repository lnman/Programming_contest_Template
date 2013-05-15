#include<stdio.h>
int main()
{
	char ac,a;
	int i=0;
//	freopen("492.txt","r",stdin);
	while(scanf("%c",&a)==1)
	{
		if(a=='a'||a=='e'||a=='o'||a=='i'||a=='u'||a=='A'||a=='E'||a=='O'||a=='I'||a=='U')
		{
			printf("%c",a);
			for(i=1;;i++)
			{
				scanf("%c",&a);
				if((a>=65&&a<=90)||(a>=97&&a<=122)) printf("%c",a);
				else {printf("ay%c",a);break;}
			}
		}
		else if((a>=65&&a<=90)||(a>=97&&a<=122))
		{
			ac=a;
			for(i=1;;i++)
			{
				scanf("%c",&a);
				if((a>=65&&a<=90)||(a>=97&&a<=122)) printf("%c",a);
				else {printf("%cay%c",ac,a);break;}
			}
		}
		else printf("%c",a);
	}
	return 0;
}