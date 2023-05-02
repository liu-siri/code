#include<stdio.h>
int main()
{
	int x=0,x0=0,x1=0,x2=0,num1=0,num2=0,i0=0,i1=0,i2=0,i3=0;
	scanf("%d",&x);
	if(x>=1&&x<=10000)
	{
		x0=x,x1=x,x2=x*x;
		for(i0=0;(x0/10!=0)||(x0%10!=0);i0++,x0/=10)
		{
			;
		}
		for(i1=1;i1<=i0;i1++,num1=0,num2=0,x1=x,x2=x*x)
		{
			for(i2=0;i2<i1-1;x1/10,i2++)
			{
				;
			}
			num1=x1%10;
			for(i3=0;i3<i1-1;x2/10,i3++)
			{
				;
			}
			num2=x2%10;
			if(num1!=num2)
			{
				printf("No");
				return 0;
			}
		}
		printf("Yes");
		return 0;
	}
	else
	{
		printf("%d out of range",x);
	}
}
