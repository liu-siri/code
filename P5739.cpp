#include<stdio.h>
int cal(int n);
int main()
{
	int n=0,ans=0;
	scanf("%d",&n);
	ans=cal(n);
	printf("%d",ans);
	return 0;
}
int cal(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*cal(n-1);
	}
}
