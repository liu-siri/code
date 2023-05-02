#include<stdio.h>
int add(int i);
int main()
{
	int S=0,N=0,i=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		S+=add(i);
	}
	printf("%d",S);
	return 0;
}
int add(int i)
{
	if(i==1)
	{
		return 1;
	}
	else
	{
		return i*add(i-1);
	}
}
