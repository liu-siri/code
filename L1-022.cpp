#include<stdio.h>
int main()
{
	int N=0,num=0,i=0,ji=0,ou=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			ou++;
		}
		else
		{
			ji++;
		}
	}
	printf("%d %d",ji,ou);
}
