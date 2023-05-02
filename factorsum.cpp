#include<stdio.h>
int main()
{
	int n=0,sum=0,i=0;
	int factor[1000]={0};
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)
	{
		scanf("%d",&factor[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum+=factor[i]*factor[i+n];
	}
	printf("%d",sum);
	return 0;
}
