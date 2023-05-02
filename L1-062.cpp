#include<stdio.h>
int judger(char s[]);
int main()
{
	int N=0,i=0;
	char s[10]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",s);
		if(judger(s))
		{
			printf("You are lucky!\n");
		}
		else
		{
			printf("Wish you good luck.\n");
		}
	}
}
int judger(char s[])
{
	int sum1=0,sum2=0;
	sum1=s[0]+s[1]+s[2]-3*'0';
	sum2=s[3]+s[4]+s[5]-3*'0';
	if(sum1==sum2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
