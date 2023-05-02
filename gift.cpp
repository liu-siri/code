#include<stdio.h>
int main()
{
	int n=0,num=0,pri=0,sum1=0,sum=0,i=0,min=0;
	scanf("%d\n",&n);
	printf("%d",n);
	scanf("%d %d\n",&num,&pri);
	if(n%num==0)
	{
		sum=n/num*pri;
	}
	else
	{
		sum=(n/num+1)*pri;
	}
	min=sum;
	for(i=0;i<2;i++)
	{
		scanf("%d %d",&num,&pri);
		if(n%num==0)
		{
			sum=n/num*pri;
		}
		else
		{
			sum=(n/num+1)*pri;
		}
		if(sum<min)
		{
			min=sum;
		}
	}
	printf("%d",min);
	return 0;
}
