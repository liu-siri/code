#include<stdio.h>
int main()
{
	int n=0,i=0;
	int fib[1000002]={0};
	fib[0]=1,fib[1]=2;
	for(i=2;i<=1000000;i++)fib[i]=(fib[i-1]+fib[i-2])%3;
	while(scanf("%d",&n)!=EOF)
	{
		if(fib[n]==0)printf("yes\n");
		else printf("no\n");
	}
}
