#include<stdio.h>
int main()
{
	int num=0,sum=0,count0=0,count_not=0,mul=0;
	scanf("%d",&num);
	mul=1;
	while(num!=0)
	{
		for(count0=0;num%10==0;num/=10,count0++)
		{
			;
		}
		count_not=num;
		sum+=count0;
		mul*=count_not;
		if(mul%10==0)
		{
			sum++;
		}
		while(mul%10==0)
		{
			mul/=10;
		}
		mul%=10;
		scanf("%d",&num);
	}
	printf("%d",sum);
	return 0;
 } 
