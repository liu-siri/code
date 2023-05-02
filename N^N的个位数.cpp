#include<stdio.h>
#include<string.h>
int cal(int n,long long int N);
int main()
{
	int i=0,T=0,n=0,ans=0;
	long long int N=0;
	char s[100]={0};
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%lld",&N);
		n=N%10;
		ans=cal(n,N);
		printf("%d\n",ans);
	}
	return 0;
}
int cal(int n,long long int N)
{
	int ans[6]={0};
	ans[1]=n%10;
	ans[2]=n*n%10;
	ans[3]=n*n*n%10;
	ans[0]=n*n*n%10;
	return ans[N%4];
}
