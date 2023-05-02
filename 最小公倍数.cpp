#include<stdio.h>
int fact(int m,int n);
int main()
{
	int m,n;
	int factor=0,ans=0;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		factor=fact(m,n);
		ans=m/factor*n;
		printf("%d\n",ans);
	}
}
int fact(int m,int n)
{
	int facter=0,max=0,t=0,min=0;
	if(m>n)max=m,min=n;
	else max=n,min=m;
	while(max%min)
	{
		t=max%min;
		max=min;min=t;
	}
	return min;
}
