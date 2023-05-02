#include<stdio.h>
void scaner(int[][20],int,int);
int sum(int[][20],int,int,int ,int);
int main()
{
	int m,n,x,y;
	int a[20][20]={0};
	scanf("%d %d",&m,&n);
	scaner(a,m,n);
	scanf("%d %d",&x,&y);
	printf("%d",sum(a,x,y,m,n));
	return 0;
}
void scaner(int a[][20],int m,int n)
{
	int i=1,j=1;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
int sum(int a[][20],int x,int y,int m,int n)
{
	if(x==1&&y==1)
	{
		return a[1][2]+a[2][1]+a[2][2];
	}
	else if(x==m&&y==1)
	{
		return a[m-1][1]+a[m-1][2]+a[m][2];
	}
	else if(x==1&&y==n)
	{
		return a[1][n-1]+a[2][n-1]+a[2][n];
	}
	else if(x==m&&y==n)
	{
		return a[m-1][n-1]+a[m-1][n]+a[m][n-1];
	}
	else if(x==1)
	{
		return a[1][y-1]+a[1][y+1]+a[2][y-1]+a[2][y]+a[2][y+1];
	}
	else if(x==m)
	{
		return a[x-1][y-1]+a[x-1][y]+a[x-1][y+1]+a[x][y-1]+a[x][y+1];
	}
	else if(y==1)
	{
		return a[x-1][1]+a[x-1][2]+a[x][2]+a[x+1][1]+a[x+1][2];
	}
	else if(y==n)
	{
		return a[x-1][n-1]+a[x-1][n]+a[x][n-1]+a[x+1][n-1]+a[x+1][n];
	}
	else
	{
		printf("x-1=%d x=%d x+1=%d a[x][y]=%d\n",x-1,x,x+1,a[x][y]);
		return a[x-1][y-1]+a[x-1][y]+a[x-1][y+1]+a[x][y-1]+a[x][y+1]+a[x+1][y-1]+a[x+1][y]+a[x+1][y+1];
	}
}
