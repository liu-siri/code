#include<stdio.h>
int main()
{
	int n=0,i=0;
	int test[100000]={0};
	scanf("%d",&n);
	for(i=0;n!=1;i++)
	{
		test[i]=n;
		if(n%2==0)
		{
			n/=2;
		}
		else
		{
			n=3*n+1;
		}
	}
	test[i]=1;
	for(i=i;i>=0;i--)
	{
		printf("%d ",test[i]);
	}
	return 0;
}
