#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cal(int num,int n);
int main()
{
	int ans=0,n=0;
	scanf("%d",&n);
	ans=cal(1,n);
	printf("%d",ans);
	return 0;
}
int cal(int num,int n)
{
	if(num==n)
	{
		return 1;
	}
	else
	{
		return 2*(cal(num+1,n)+1);
	}
}
