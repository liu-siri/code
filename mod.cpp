#include<stdio.h>
int main()
{
	 long long int n=0;
	 int n0=0,i=0,sum=0,k=0,num=0,re=0;
	scanf("%lld",&n);
	n0=n;
	for(k=0;n0!=0;k++,n0/=10)
	{
		;
	}
	for(i=k;i>=1;i--)
	{	
		num=n%10;sum=sum+num*i;n=n/10;
	}
	re=sum%97;
	printf("%d",re);
	return 0;
}
