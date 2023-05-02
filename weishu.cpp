#include<stdio.h>
int fun(int );
int n=0,num=0;
int main()
{
	scanf("%d",&n);
	num=fun(n);
	printf("%d",num);
	return 0;
} 
int fun(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		return fun(x/10)+1;
	}
}

