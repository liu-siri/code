#include<stdio.h>
int main()
{
	int n=1,N=0,num=0,tem=0,longest=0,past=0;
	scanf("%d",&N);
	scanf("%d",&num);
	past=num-1;
	while(n<=N)
	{
		if(num-past==1)
		{
			tem++;
		}
		else
		{
			if(tem>longest)
			{
				longest=tem;
				tem=1;
			}
		}
		past=num;
		n++;
		if(n<=N)
		{
			scanf("%d",&num);
		}
	}
	if(tem>longest)
		{
			longest=tem;
			tem=1;
		}
	printf("%d",longest);
	return 0;
}
