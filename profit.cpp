#include<stdio.h>
int main()
{
	float num1=0,num2=0,num3=0,sum=0,profit=0;
	scanf("%f %f %f",&num1,&num2,&num3);
	sum=138*num1+208*num2+158*num3;
	if(num1>=2&&num2>=2&&num3>=2&&sum>=5000)
	{
		if(sum>=5000&&sum<8000)
		{
			profit=sum*0.1;
		}
		if(sum>=8000&&sum<10000)
		{
			profit=sum*0.15;
		}
		if(sum>=10000)
		{
			profit=sum*0.2;
		}
		printf("%.1f",profit);
	}
	else
	{
		printf("fail");
	}
	return 0;
}
