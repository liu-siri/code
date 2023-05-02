#include<stdio.h>
int main()
{
	int n=0,count2=0,count5=0,n1=0,n2=0,min=0;
	scanf("%d",&n);
	while(n!=0)
	{
		n1=n,n2=n;
		for(;n1%2==0;count2++,n1/=2)
		{
			;
		}
		for(;n2%5==0;count5++,n2/=5)
		{
			;
		}
		scanf("%d",&n);
	}
	if(count2<=count5)
	{
			min=count2;
	}
	else
	{
			min=count5;
	}
	printf("%d",min);
	return 0;
 } 
