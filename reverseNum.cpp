#include<stdio.h>
int Fn(int);
int main()
{
	int n=0,fn=0;
	scanf("%d",&n);
	fn=Fn(n);
	printf("%.2lf",(double)fn);
}
int Fn(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return Fn(n-1)+Fn(n-2);
	}
}
