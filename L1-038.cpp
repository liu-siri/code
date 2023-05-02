#include<stdio.h>
int main()
{
	int N=0,count=0;
	scanf("%d",&N);
	while(N!=250)
	{
		count++;
		scanf("%d",&N);
	}
	printf("%d",count+1);
	return 0;
}
