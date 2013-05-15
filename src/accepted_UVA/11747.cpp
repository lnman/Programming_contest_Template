#include<stdio.h>
#include<stdlib.h>
#define MAXN 1001

int P[MAXN], Rank[MAXN];
unsigned int res[1000];
int now;


int n,m,num;
struct con{
	int u,v,val;
}arr[25001];

void In() { // initializing parent and rank for each node
int i;
for(i = 0; i<= n; i++) {
P[i] = i;
Rank[i] = 1;
}
}

int compare1 (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int compare (const void * a, const void * b)
{
	con *c=(con*)a;
	con *d=(con*)b;
	return ( c->val - d->val );
}

int Find(int n) { // find the parent of a node
if(P[n] != n)
P[n] = Find(P[n]);
return P[n];
}

void Link(int x, int y) { // joining the nodes
if(Rank[x] > Rank[y]) {
P[y] = x;
}
else {
P[x] = y;
if(Rank[x] == Rank[y])
Rank[y]++;
}
}

void Kruscal() {
int x, y;
for(int i = 0; i<m; i++) {
x = Find(arr[i].u);
y = Find(arr[i].v);
if(x != y) { // if not cycle
Link(x,y);
}
else res[now++]=arr[i].val;
}
}


int main()
{
//	freopen("11747.txt","r",stdin);
	while(scanf("%d%d",&n,&m)==2&&n!=0&&m!=0)
	{
		int x;
		now=0;
		for(x=0;x<m;x++){scanf("%d%d%d",&arr[x].u,&arr[x].v,&arr[x].val);}
		qsort(arr,m,sizeof(con),compare);
		In();
		Kruscal();
		if(!now){printf("forest\n");continue;}
		qsort(res,now-1,sizeof(unsigned int),compare1);
		for(x=0;x<now;x++){if(x)printf(" ");printf("%d",res[x]);}
		printf("\n");
	}
	return 0;
}