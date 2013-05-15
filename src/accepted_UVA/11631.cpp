#include<stdio.h>
#include<stdlib.h>
#define MAXN 200001

int P[MAXN], Rank[MAXN];



int n,m,num;
struct con{
	int u,v,val;
}arr[200001];

void In() { // initializing parent and rank for each node
int i;
for(i = 0; i<= n; i++) {
P[i] = i;
Rank[i] = 1;
}
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
int x, y, total = 0;
for(int i = 0; i<m; i++) {
x = Find(arr[i].u);
y = Find(arr[i].v);
if(x != y) { // if not cycle
Link(x,y);
total++;
num+=arr[i].val; // join those node // already taken all nodes ?
if(total==n-1)break;
}
}
}


int main()
{
//	freopen("11631.txt","r",stdin);
	while(scanf("%d%d",&n,&m)==2&&n!=0&&m!=0)
	{
		int x,max=0;
		num=0;
		for(x=0;x<m;x++){scanf("%d%d%d",&arr[x].u,&arr[x].v,&arr[x].val);max+=arr[x].val;}
		qsort(arr,m,sizeof(con),compare);
		In();
		Kruscal();
		printf("%d\n",max-num);
	}
	return 0;
}