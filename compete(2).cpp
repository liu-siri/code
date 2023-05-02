#include<stdio.h>
#include<math.h>
int main()
{
	int num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,sumA=0,sumB=0;
	scanf("%d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6);
	sumA=num1+num2+num3;
	sumB=num4+num5+num6;
	if(num1==num2&&num2==num3)
	{
		sumA+=10000;
	}
	if(num5==num4&&num5==num6)
	{
		sumB+=10000;
	}
	sumA=fabs(sumA-10.5);
	sumB=fabs(sumB-10.5);
	if(sumA>sumB)
	{
		printf("A");
	}
	if(sumA<sumB)
	{
		printf("B");
	}
	if(sumA==sumB)
	{
		printf("=");
	}
}
