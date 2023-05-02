#include<stdio.h>
int judger(long long int,long long int);
int main()
{
	long long int num=11,n=0,flag=0,k=0,copy=0;
	int ans;
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
		k=2;
		while(flag==0)
		{
			num=num*10+1;
			k++;
			if(num%n==0)
			{
				flag=1;
			}
		}
		printf("%d",k);
	}
	return 0;
}
int judger(long long int n,long long int k)
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
