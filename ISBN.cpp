#include<stdio.h>
int main()
{
	int sum=0,check=0,rec=0,num1=0,num2=0,mul=0,BA1=0,BA2=0,stage1=0,stage2=0,stage3=0,i=0,j=0;
	scanf("%d-%d-%d-%d",&stage1,&stage2,&stage3,&rec);
	BA1=stage2,BA2=stage3; 
	for(i=4;i>=2;i--,stage2=BA1)
	{
		num1=stage2%10;
		stage2/=10;
		mul=num1*i;
		sum+=mul;
	}
	for(i=9;i>=5;i--,stage3=BA2)
	{
		num2=stage3%10;
		stage3/=10;
		mul=num2*i;
		sum+=mul;
	}
	sum+=stage1;
	check=sum%11;
	if(check==10)
	{
		check='X';
	} 
	if(check==rec)
	{
		printf("Right");
	}
	else
	{
		printf("%d-%d-%d-%d",stage1,stage2,stage3,check);
	}
	return 0;
}
