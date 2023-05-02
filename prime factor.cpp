#include<stdio.h>
#include<math.h>
int isprime(int);
int main()
{
	int ans=0,p=0,n=0;
	scanf("%d",&n);
	if(n%2==0)
	{
		p=n-1;
	}
	else
	{
		p=n-2;
	}
	for(;p>=sqrt(n)&&ans==0;p-=2)
	{
		if(n%p==0)
		{
			ans=isprime(p);
			if(ans==1)
			{
				printf("%d",p);
			}
		}
	}
}
int isprime(int p)
{
	int i=0;
	for(i=2;i<=sqrt(p);i++)
	{
		if(p%i==0)
		{
			return 0;
		}
	}
	return 1;
}
