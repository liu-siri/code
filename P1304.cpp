#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void judger(int num);
int zhishu(int e2);
int main()
{
	int i=0,N=0;
	scanf("%d",&N);
	for(i=4;i<=N;i+=2)
	{
		judger(i);
	}
}
void judger(int num)
{
	int e1=0,e2=0,flag=0;
	for(e1=2;e1<num&&flag==0;e1++)
	{
		if(zhishu(num-e1)&&zhishu(e1))
		{
			printf("%d=%d+%d\n",num,e1,num-e1);
			flag=1;
		}
	}
}
int zhishu(int e2)
{
	int k=0;
	for(k=2;k<=sqrt(e2);k++)
	{
		if(e2%k==0)
		{
			return 0;
		}
	}
	return 1;
}
