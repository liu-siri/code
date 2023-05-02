#include<stdio.h>
int f(int n)
{
	switch(n)
	{
		case 1:return 1;break;
		case 2:return 3;break;
		default:return 2*f(n-1)+1;
	}
}
int main()
{
	int n=0,num=0;
	scanf("%d",&n);
	num=f(n);
	printf("%d",num);
	return 0;
}
