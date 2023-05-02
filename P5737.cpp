#include<stdio.h>
int  judger(int num);
int main()
{
	int start=0,finish=0;
	int i=0,counter=0;
	int year[3000]={0};
	scanf("%d %d",&start,&finish);
	for(i=start;i<=finish;i++)
	{
		if(judger(i))
		{
			year[counter]=i;
			counter++;
		}
	}
	printf("%d\n",counter);
	for(i=0;i<counter;i++)
	{
		if(i!=0)
		{
			printf(" ");
		}
		printf("%d",year[i]);
	}
	return 0;
}
int  judger(int num)
{
	if(num%400==0)
	{
		return 1;
	}
	else if(num%100==0&&num%400!=0)
	{
		return 0;
	}
	else if(num%4==0)
	{
		return 1;
	}
	else
	{
		return 0;	
	}
}
