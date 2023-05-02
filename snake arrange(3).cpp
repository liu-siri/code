#include<stdio.h>
int judger(int,int,int);
int printer(int[][100],int);
int main()
{
	int n=0,num=0;
	int a[100][100]={0};
	scanf("%d",&n);
	for(num=1;num<=n*n;num++)
	{
		x=judger(n,num,0);
		y=judger(n,num,1);
		a[x][y]=num;
	}
	printer(a,n);
}
judger(int n,int num,int flag)
{
	int i=0,j=0;
	if(flag==0)
	{
		
	}
}
