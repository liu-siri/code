#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int ans=0,n=0;
	scanf("%d",&n);
	ans=(int)pow(2.0,(double)n);
	printf("2^%d = %d",n,ans);
	return 0;
}
