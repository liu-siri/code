#include<stdio.h>
int an(int);
int main()
{
	int n=0,i=0,num=0,n0=0;
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(i%2==0||i%5==0)
		{
			num++;
		}
	}
	n0=n-num;
	printf("%d",an(n0));
}
int an(int n0)
{
	if(n0==1)
	{
		return 3;
	}
	else if(n0==2)
	{
		return 3;
	}
	else
	{
		return an(n0-1)+an(n0-2);
	}
}
