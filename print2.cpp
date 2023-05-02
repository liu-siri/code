#include<stdio.h>
int print1(int);
int print2(int);
int main()
{
	int n=0;
	scanf("%d",&n);
	print1(n);
	printf("\n");
	print2(n);
}
int print1(int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
	{
		for(j=4*i-3;j<=4*i;j++)
		{
			if(j<10)
			{
				printf("0%d",j);
			}
			else
			{
				printf("%d",j);	
			}
		}
		printf("\n");
	}
}
int print2(int n)
{
	int i=0;
	float j=0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<2*(n-i);j++)
		{
			printf(" ");
		}
		j=0.5*i*i-0.5*i+1.0;
		for(;j<=(i*i+i)/2.0;j++)
		{
			if(j<10)
			{
				printf("0%d",(int)j);
			}
			else
			{
				printf("%d",(int)j);
			}
		}
		printf("\n");
	}
}
