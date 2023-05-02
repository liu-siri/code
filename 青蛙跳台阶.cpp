#include<stdio.h>
int f(int n)
{
	switch(n)
	{
		case 1:return 1;break;
		case 2:return 2;break;
		default:return f(n-1)+2*f(n-2);
	}
}
int main()
{
	int n=0,method=0;
	scanf("%d",&n);
	method=f(n);
	printf("%d",method);
	return 0;
 } 
