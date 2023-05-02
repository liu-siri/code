#include<stdio.h>
void counter(int ,int[]);
int main()
{
	int i=0,a=0,b=0;
	int counters[10]={0};
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		counter(i,counters);
	}
	for(i=0;i<=9;i++)
	{
		printf("%d ",counters[i]);
	}
	return 0;
}
void counter(int i,int counters[])
{
	while(i!=0)
	{
		counters[i%10]++;
		i/=10;
	}
}
