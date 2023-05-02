#include<stdio.h>
void scaner(int [][120],int ,int );
void dealer(int[][120],int ,int);
int main()
{
	int m=0,n=0;
	int a[120][120]={0};
	scanf("%d %d",&m,&n);
	scaner(a,m,n); //把数读到a数组里 
	dealer(a,m,n); //处理数据 
	return 0;
}
void scaner (int a[][120],int m,int n)
{
	int i=0,j=0;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void dealer(int a[][120],int m,int n)
{
	int x=0,y=0,k=0,max=0,min=0,flag=0;
	for(x=0;x<=m-1&&flag==0;x++) //从1到M-1行循环遍历 
	{
		max=0;
		for(y=0;y<=n-1;y++) //找一行中最大元素的列坐标 
		{
			if(a[x][y]>a[x][max])
			{
				max=y;
			}
		}
		min=0;
		for(k=0;k<=m-1;k++) //找最大列中最小元素的列坐标 
		{
			if(a[k][max]<a[min][max])
			{
				min=k;
			}
		}
		if(min==x) //判断x是否为最小坐标 
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("The saddle point is (%d,%d)=%d.",x-1,y-1,a[x-1][y-1]);
	}
	else
	{
		printf("There is no saddle point in the matrix.");
	}
}

