#include<stdio.h>
int vary(int );
int main()
{
	int n=0;
	int test[100000]={0};
	scanf("%d",&n);
	printf("%d ",vary(n));
	return 0;
}
int vary(int n)
{
	if(n==1)
	{
		return n;
	}
	else if(n%2==0)
	{
		printf("%d ",vary(n/2));
		return n;
	}
	else if(n%2==1)
	{
		printf("%d ",vary(3*n+1));
		return n;
	}
}
