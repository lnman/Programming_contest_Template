#include<stdio.h>

void rx(int *x,int n,int m,int k,int b)
{
	int a[6][6];
	for(int z=0;z<6;z++)
		for(int o=0;o<6;o++)a[z][o]=*(x+z*6+o);
	if(n>1){
	a[b][k]=a[k][b]=0;}
	if(n>=9)printf("%d\n",m);
	else
	{
		for(int l=1;l<6;l++)
			if(a[k][l]==1)
			{
				rx(&a[0][0],n+1,m*10+l,l,k);
			}
	}
}


int main()
{
	int i[6][6];
	for(int m=0;m<6;m++)
		for(int n=0;n<6;n++)i[m][n]=0;
	i[1][2]=1,i[2][1]=1;
	i[1][3]=1,i[3][1]=1;
	i[1][5]=1,i[5][1]=1;
	i[2][3]=1,i[3][2]=1;
	i[5][2]=1,i[2][5]=1;
	i[3][5]=1,i[5][3]=1;
	i[3][4]=1,i[4][3]=1;
	i[4][5]=1,i[5][4]=1;
	rx(&i[0][0],1,1,1,0);
	return 0;
}

