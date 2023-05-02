#include<stdio.h>
int main()
{
	int m=0,m0=0,n=0,trans=0,div=0,re=0,n0=0,mul=0;
	scanf("%d %d",&m,&n);
	if(m<n)
	{
		trans=m;
		m=n;
		n=trans;
	}
	n0=n,m0=m;
	do
	{
		div=m/n;
		re=m%n;
		m=n; 
		n=re;
	}
	while(re!=0);
	printf("%d",m);
	mul=m*(m0/m)*(n0/m);
	printf(" ");
	printf("%d",mul);
	return 0;
}
