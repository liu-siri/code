#include<stdio.h>
#include<math.h>
int mypow(int num,int n);
int main()
{
	int n=0,num=0;
	scanf("%d%d",&num,&n);
	printf("%d",mypow(num,n));
	return 0;
}
int mypow(int num,int n)
{
	int ans=1;
	if(n==0) return 1;
	else 
	{
		ans=pow(num*num,n/2);
		if(n%2)ans*=num;
	}
	return ans;
}
