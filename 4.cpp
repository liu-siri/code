#include<stdio.h>
int main()
{
	int n=0,i=0,num=0,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		count=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&num);
			if(num%7==0||num%10==7)
			{
				count++;
			}
		}
		printf("%d\n",count);
		scanf("%d",&n);
	}
	return 0;
}
