#include<stdio.h>
#include<math.h>
int judger(int n);
int main()
{
	int i=0,N=0,n=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n);
		if(judger(n))
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
int judger(int n)
{
	int j=0;
	if(n%2==0||n==1||n==2)
	{
		return 0;
	}
	for(j=2;j<=sqrt(n);j++)
	{
		if(n%j==0)
		{
			return 0;
		}
	}
	return 1;
}
