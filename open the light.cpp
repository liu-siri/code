#include<stdio.h>
int main()
{
	long long int n=0,i=0,j=0,t=0,num=0,flag=0;
	double a=0;
	int an[2000000]={0};
	scanf("%lld",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lld",&a,&t);
		for(j=1;j<=t;j++)
		{
			num=(long long int)(a*j);
			if(an[num]==1)
			{
				an[num]=0;
			}
			else
			{
				an[num]=1;
			}
		}
	}
	for(i=1;i<=2000000&&flag==0;i++)
	{
		if(an[i]==1)
		{
			printf("%lld",i);
			flag=1;
		}
	}
	return 0;
}
