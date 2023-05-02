#include<stdio.h>
/*long long int  n=0,an=0,pastone=0,pasttwo=0,i=0;
long long int calculate(long long int);
int main()
{
	scanf("%lld",&n);
	an=calculate(n);
	printf("%lld",an%101);
	return 0;
}
long long int calculate(long long n)
{
	if(n==1||n==2)
	{
		an=1;
	}
	else
	{
		pasttwo=1;
		pastone=1;
		for(i=3;i<=n;i++)
		{
			an=pastone+pasttwo;
			pasttwo=pastone;
			pastone=an;
		}
		return an;
	}
}*/
#include<stdio.h>
long long int  n=0,yu=0,pastone=0,pasttwo=0,i=0;
long long int calculate(long long int);
int main()
{
	scanf("%lld",&n);
	yu=calculate(n);
	printf("%lld",yu);
	return 0;
}
long long int calculate(long long n)
{
	if(n==1||n==2)
	{
		yu=1;
	}
	else
	{
		pasttwo=1;
		pastone=1;
		for(i=3;i<=n;i++)
		{
			yu=(pastone+pasttwo)%101;
            pasttwo=pastone;
            pastone=yu;
		}
		return yu;
	}
}


