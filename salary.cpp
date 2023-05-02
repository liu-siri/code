#include<stdio.h>
#define salary 300
int main()
{
	int X=0,pay=0,yu=0,mom=0,flag=1;
	float tem=0;
	for(X=0;X<12&&flag==1;X++)
	{
		scanf("%d",&pay);
		if(salary+yu-pay<0)
		{
			flag=0;
		}
		yu=salary+yu-pay;
		if(yu>=100)
		{
			mom+=yu-yu%100;
			yu%=100;
		}
	}
	if(X==12)
	{
		tem=1.2*mom+yu;
		printf("%d",(int)tem);
	}
	else
	{
		printf("-%d",X);
	}
	return 0;
}
