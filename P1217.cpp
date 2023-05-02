#include<stdio.h>
#include<math.h>
void huiwen_1(int a,int b);
void huiwen_2(int a,int b);
void huiwen_3(int a,int b);
void huiwen_4(int a,int b);
void huiwen_5(int a,int b);
void huiwen_6(int a,int b);
void huiwen_7(int a,int b);
void huiwen_8(int a,int b);
void huiwen_9(int a,int b);
int zhishu(int num);
int main()
{
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	huiwen_1(a,b);
	huiwen_2(a,b);
	huiwen_3(a,b);
	huiwen_4(a,b);
	huiwen_5(a,b);
	huiwen_6(a,b);
	huiwen_7(a,b);
	huiwen_8(a,b);
	huiwen_9(a,b);
	return 0;
}
void huiwen_1(int a,int b)
{
	int num;
	for(num=5;num<=9;num+=2)
	{
		if(zhishu(num)&&num>=a&&num<=b)
		{
			printf("%d\n",num);
		}
	}
}
void huiwen_2(int a,int b)
{
	int e1=0,e2=0,e3=0,e4=0,e5=0,num=0;
	for(e1=1;e1<=9;e1+=2)
		{
			num=e1*(int)pow(10.0,1.0)+e1;
			if(zhishu(num)&&num>=a&&num<=b)
			{
				printf("%d\n",num);
			}
		}
}
void huiwen_3(int a,int b)
{
	int e1=0,e2=0,e3=0,e4=0,e5=0,num=0;
	for(e1=1;e1<=9;e1+=2)
		{
			for(e2=0;e2<=9;e2++)
			{
				num=e1*(int)pow(10.0,2.0)+e2*(int)pow(10.0,1.0)+e1;
				if(zhishu(num)&&num>=a&&num<=b)
				{
					printf("%d\n",num);
				}
			}
		}
}
void huiwen_4(int a,int b)
{
	int e1=0,e2=0,e3=0,e4=0,e5=0,num=0;
	for(e1=1;e1<=9;e1+=2)
		{
			for(e2=0;e2<=9;e2++)
			{
				num=e1*(int)pow(10.0,3.0)+e2*(int)pow(10.0,2.0)+e2*(int)pow(10.0,1.0)+e1;
				if(zhishu(num)&&num>=a&&num<=b)
				{
					printf("%d\n",num);
				}
			}
		}
}
void huiwen_5(int a,int b)
{
	int e1=0,e2=0,e3=0,e4=0,e5=0,num=0;
	for(e1=1;e1<=9;e1+=2)
		{
			for(e2=0;e2<=9;e2++)
			{
				for(e3=0;e3<=9;e3++)
				{
					num=e1*(int)pow(10.0,4.0)+e2*(int)pow(10.0,3.0)+e3*(int)pow(10.0,2.0)+e2*(int)pow(10.0,1.0)+e1;
					if(zhishu(num)&&num>=a&&num<=b)
					{
						printf("%d\n",num);
					}
				}
			}
		}
}
void huiwen_6(int a,int b)
{
	int e1=0,e2=0,e3=0,e4=0,e5=0,num=0;
	for(e1=1;e1<=9;e1+=2)
		{
			for(e2=0;e2<=9;e2++)
			{
				for(e3=0;e3<=9;e3++)
				{
					num=e1*(int)pow(10.0,5.0)+e2*(int)pow(10.0,4.0)+e3*(int)pow(10.0,3.0)+e3*(int)pow(10.0,2.0)+e2*(int)pow(10.0,1.0)+e1;
					if(zhishu(num)&&num>=a&&num<=b)
					{
						printf("%d\n",num);
					}
				}
			}
		}
}
void huiwen_7(int a,int b)
{
	int e1=0,e2=0,e3=0,e4=0,e5=0,num=0;
		for(e1=1;e1<=9;e1+=2)
			{
				for(e2=0;e2<=9;e2++)
				{
					for(e3=0;e3<=9;e3++)
					{
						for(e4=0;e4<=9;e4++)
						{
							num=e1*(int)pow(10.0,6.0)+e2*(int)pow(10.0,5.0)+e3*(int)pow(10.0,4.0)+e4*(int)pow(10.0,3.0)+e3*(int)pow(10.0,2.0)+e2*(int)pow(10.0,1.0)+e1;
							if(zhishu(num)&&num>=a&&num<=b)
							{
								printf("%d\n",num);
							}
						}
					}
				}
			}
	
}
void huiwen_8(int a,int b)
{
	int e1=0,e2=0,e3=0,e4=0,e5=0,num=0;
	for(e1=1;e1<=9;e1+=2)
		{
			for(e2=0;e2<=9;e2++)
			{
				for(e3=0;e3<=9;e3++)
				{
					for(e4=0;e4<=9;e4++)
					{
						num=e1*(int)pow(10.0,7.0)+e2*(int)pow(10.0,6.0)+e3*(int)pow(10.0,5.0)+e4*(int)pow(10.0,4.0)+e4*(int)pow(10.0,3.0)+e3*(int)pow(10.0,2.0)+e2*(int)pow(10.0,1.0)+e1;
						if(zhishu(num)&&num>=a&&num<=b)
						{
							printf("%d\n",num);
						}
					}
				}
			}
		}
}
void huiwen_9(int a,int b)
{
	int e1=0,e2=0,e3=0,e4=0,e5=0,num=0;
	for(e1=1;e1<=9;e1+=2)
		{
			for(e2=0;e2<=9;e2++)
			{
				for(e3=0;e3<=9;e3++)
				{
					for(e4=0;e4<=9;e4++)
					{
						for(e5=0;e5<=9;e5++)
						{
							num=e1*(int)pow(10.0,8.0)+e2*(int)pow(10.0,7.0)+e3*(int)pow(10.0,6.0)+e4*(int)pow(10.0,5.0)+e5*(int)pow(10.0,4.0)+e4*(int)pow(10.0,3.0)+e3*(int)pow(10.0,2.0)+e2*pow(10.0,1.0)+e1;
							if(zhishu(num)&&num>=a&&num<=b)
							{
								printf("%d\n",num);
							}
						}
					}
				}
			}
		}
}
int zhishu(int num)
{
	int i=0,flag=0;
	for(i=2;i<=sqrt(num)&&flag==0;i++)
	{
		if(num%i==0)
		{
			return 0;
			flag=1;
		}
	}
	if(flag==0)
	{
		return 1;
	}
}
