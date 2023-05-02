#include<stdio.h>
#include<math.h>
int huiwen(int);
int isprime(int);
int main()
{
	int A=0,B=0,num=0,judge1=0,judge2=0;
	scanf("%d %d",&A,&B);
	for(num=A;num<=B;num++)
	{
		judge1=huiwen(num);		
		judge2=isprime(num);
		if(judge1==1&&judge2==1)
		{
			printf("%d\n",num);
		}
	}
}
int huiwen(int num)
{
	int i=0,j=0,k=0,left=0,num2=num,right=0,count=0;
	for(count=0;num2!=0;count++,num2/=10)
    {
		;
	}
	for(i=0;i<=count/2-1;i++)
	{
		int num0=num,num1=num;
		for(k=0;k<count-i-1;k++)
		{
			num0/=10;
		}
		left=num0%10;
		for(k=0;k<i;k++)
		{
			num1/=10;
		}
		right=num1%10;
		if((left!=right)||((right%2==0)&&(i==0)))
		{
			return 0;
		}
	}
	return 1;
}
int isprime(int num)
{
	int n=0;
	if(num%2==0)
	{
		return 0;
	}
	for(n=2;n<=sqrt(num);n++)
	{
		if(num%n==0)
		{
			return 0;
		}
	}
	return 1;
}

