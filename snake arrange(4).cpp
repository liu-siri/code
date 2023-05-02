#include<stdio.h>
int main()
{
	int ord[4][2]={{0,1},
				   {1,0},
				   {0,-1},
				   {-1,0}};
	int a[120][120]={0}; 
	int tx=0,ty=0,x=1,y=1,d=0;
	int n,num,i,j;
	scanf("%d",&n);
	for(num=1;num<=n*n;num++)
	{
		a[x][y]=num;
		tx=x+ord[d][0],ty=y+ord[d][1];
		if(tx<1||tx>n||ty<1||ty>n||a[tx][ty])
		{
			d=(d+1)%4;
		}
		x+=ord[d][0],y+=ord[d][1];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%3d",a[i][j]);
		}
		if(i!=n)
		{
			printf("\n");
		}
	}
	return 0;
 } 
