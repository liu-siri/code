#include<stdio.h>
int main()
{
	long long int i=0,k=0,n=0,sum=0,period=0;
	scanf("%lld",&k);
	while(1)
	{
		if((k>=n*(n+1)/2)&&(k<(n+1)*(n+2)/2))
		{
			break;
		}
		n++;
		
	}
	printf("%d\n",n);
	for(i=1;i<=n;i++)
	{
		period=i*i;
		sum+=period;
	}
	printf("%lld\n",sum);
	sum+=(k-n*(n+1)/2)*(n+1);
	printf("%lld",sum);
}
