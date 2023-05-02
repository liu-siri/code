#include<stdio.h>
int main()
{
	int num=0,mul=1,sum=0,count0=0,count_not0=0;
	scanf("%d",&num);
	while(num!=0)
	{
		for(count0=0;num%10==0;num/=10,count0++)
		{
			;
		}
		sum+=count0;
		count_not0=num;
		mul=mul*count_not0;
		for(count0=0;mul%10==0;mul/=10,count0++)
		{
			;
		}
		sum+=count0;
		scanf("%d",&num);
	}
	printf("%d",sum);
	return 0;
 } 
