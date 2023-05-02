#include<stdio.h>
int main()
{
	int n=0,n0=0,n1=0,n2=0,k=0,num1=0,num2=0,i0=0,i1=0,i2=0;
	scanf("%d",&n);
	n0=n,n1=n,n2=n;
	for(k=0;n0!=0;k++,n0/=10)
	{
		;
	}
	for(i0=1;i0<=k/2;i0++)
	{
		n1=n,n2=n;
		for(i1=0;i1<i0-1;i1++,n1/=10)
		{
			;
		}
		num1=n1%10;
		for(i2=0;i2<k-i0;i2++,n2/=10)
		{
			;
		}
		num2=n2%10;
		if(num1!=num2)
		{
			printf("no");
			return 0;
		}
	}
	printf("yes");
	return 0;
 } 
