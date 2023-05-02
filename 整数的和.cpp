#include<stdio.h>
int main()
{
	int num=0,sum=0;
	scanf("%d",&num);
	while(num!=-1)
	{
		sum+=num;
		scanf("%d",&num);
	}
	printf("%d",sum);
	return 0;
 } 
