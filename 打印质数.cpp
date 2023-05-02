#include<stdio.h>
int main()
{
	int n=0,i=0,s=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%3==0&&i%7==0)
		{
			sum+=i;
		}
	}
	s=sum*sum;
	printf("%d",s);
	return 0;
}
