#include<stdio.h>
int main()
{
	int n=0,i=0;
	float avg=0,num=0,max=0,min=11,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&num);
		if(num>max)
		{
			max=num;
		}
		if(num<min)
		{
			min=num;
		}
		sum+=num;
	}
	avg=(sum-max-min)/(n-2);
	printf("%.2f",avg);
	return 0;
}
