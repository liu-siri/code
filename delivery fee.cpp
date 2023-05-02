#include<stdio.h>
int main()
{
	int pri=0,ex=0,sum=0,total=0;
	scanf("%d",&pri);
	while(pri!=0)
	{
		sum+=pri;
		scanf("%d",&pri);
	}
	if(sum<20)
	{
		printf("error");
		return 0;
	}
	if(sum>=20&&sum<30)
	{
		ex=8;
	}
	if(sum>=30&&sum<40)
	{
		ex=5;
	}
	if(sum>40)
	{
		ex=0;
	}
	total=sum+ex;
	printf("%d",total);
	return 0;
 } 
