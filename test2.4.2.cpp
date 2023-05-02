#include<stdio.h>
int an(long long int);
int judger(long long int,int);
int main()
{
	long long int n=0,n0=0;
	int i=0,num=0,k=0,copy=0,ans=0;
	scanf("%lld",&n);
	copy=n;
	for(k=0;copy!=0;k++,copy/=10)
	{
		;
	}
	ans=judger(n,k);
	if(ans==1)
	{
		printf("%d",k);
	}
	else
	{
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
}
int an(long long int n0)
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
int judger(long long int n,int k)
{
	int copy=n;
	for(copy=n;k>0;k--,copy/=10)
	{
		if(copy%10!=1)
		{
			return 0;
		}
	}
	return 1;
}
