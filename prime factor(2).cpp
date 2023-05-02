#include<stdio.h>
#include<math.h>
int isprime(int);
int main()
{
	int ans=0,p=0,n=0;
	scanf("%d",&n);
	for(p=2;p<=sqrt(n);p++)
	{
		if(n%p==0)
		{	
			printf("%d",n/p);
		}
	}
}
/*int isprime(int p)
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
}*/
