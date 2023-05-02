#include<stdio.h>
int judger(int[],int,int);
int main()
{
	int n=0,m=0,i=0;
	int a[3030]={0};
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d",judger(a,n,m));
	return 0;
}
int judger(int a[],int n,int m)
{
	int i=0,j=0,tem=0,min;
	for(i=0;i<=n-m;i++)
	{
		tem=0;
		for(j=i;j<=i+m-1;j++)
		{
			tem+=a[j];
		}
		if(tem<min||i==0)
		{
			min=tem;
		}
	}
	return min;
}
