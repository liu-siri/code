#include<stdio.h>
int a(int,int);
int sum(int);
int main()
{
	int x=0;
	scanf("%d",&x);
	printf("%d",sum(x));
	return 0;
}
int a(int x,int n)
{
	while(a(x,n)<0.000001)
	{
		if(n=1)
		{
			return x;
		}
		else
		{
			return a(n-1)*(-1)/((2*n-2)*(2*n-1));
		}
	}
	return a(x,n);
}
int sum(int x)
{
		
}
