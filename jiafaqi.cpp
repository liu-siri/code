#include<stdio.h>
int main()
{
	long long int N=0,i=0,m=0,n=0,zi=0,mu=0,qian=0,hou=0,mulb=1,gong=0,beichu=0,div=0,yu=0;
	long long int a[100]={0},b[100]={0};
	scanf("%lld",&N);
	for(i=0;i<=N-1;i++)
	{
		scanf("%lld/%lld",&a[i],&b[i]);
	}
	for(i=0;i<=N-1;i++)
	{
		mulb*=b[i];
	}
	for(i=0;i<=N-1;i++)
	{
		zi+=a[i]*(mulb/b[i]);
	}
	mu=mulb;
	qian=(long long int)(zi/mu);
	if(qian==0&&zi==0)
	{
		printf("0");
	}
	if(qian!=0)
	{
		zi-=qian*mu;
		if(zi!=0)
		{
			printf("%lld ",qian);
		}
		else
		{
			printf("%lld",qian);
		}
	}
	if(zi!=0)
	{
		beichu=mu,div=zi,yu=beichu%div;
		while(yu!=0)
		{
			beichu=div,div=yu;
			yu=beichu%div;
		}
		gong=div;
		zi=zi/gong;
		mu=mu/gong;
		printf("%lld/%lld",zi,mu);
	}
}
