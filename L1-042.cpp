#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void cal(int x);
int main()
{
    int x=0;
    scanf("%d",&x);
    cal(x);
}
void cal(int x)
{
    int n=0,i=0,flag=0;
    long long int s=0,num=0;
    while(num<x)
    {
		num=num*10+1;
		n++;
	}
	while(flag==0)
	{
		printf("%lld",num/x);
		num%=x;
		if(num==0)
		{
			flag=1;
		}
		else
		{
			num=num*10+1;
			n++;
		}
	}
	printf(" %d",n);
}
