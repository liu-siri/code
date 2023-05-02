#include<stdio.h>
#include<math.h>
int main()
{
	int flag = 1;
	int x1,x2,x3,x4,x5,x6,x7,x8;
	int num = 0;
	int sum = 0;
/*	for(num = 1;flag == 1&&num <= 100;num++)
	{
		//num=24;
		flag=0;
		for(x1 = 0;x1<=pow(num,1/3)+1&&!flag;x1++)
		{
			for(x2 = 0;x2<=pow(num,1/3)+1&&!flag;x2++)
			{
				for(x3 = 0;x3<=pow(num,1/3)+1&&!flag;x3++)
				{
					for(x4 = 0;x4<=pow(num,1/3)+1&&!flag;x4++)
					{
						for(x5 = 0;x5<=pow(num,1/3)+1&&!flag;x5++)
						{
							for(x6 = 0;x6<=pow(num,1/3)+1&&!flag;x6++)
							{
								for(x7 = 0;x7<=pow(num,1/3)+1&&!flag;x7++)
								{
									for(x8 = 0;x8<=pow(num,1/3)+1&&!flag;x8++)
									{
										if(num==x1*x1*x1+x2*x2*x2+x3*x3*x3+x4*x4*x4+x5*x5*x5+x6*x6*x6+x7*x7*x7+x8*x8*x8)
										{
											flag = 1;
											sum = pow(x1,3)+pow(x2,3)+pow(x3,3)+pow(x4,3)+pow(x5,3)+pow(x6,3)+pow(x7,3)+pow(x8,3);
											printf("num = %d ,sum = %d\n",num ,sum);
											break;
										}
									}		
								}		
							}		
						}		
					}	
				}
			}	
		}
	}
	
	if(flag == 0)
	{
		printf("\nYes,exists\n");
		printf("num=%d\n",num);
	}
	else
	{
		printf("404\n");
	}*/
	num = 19;
	printf("num = 19\n");
	for(x1 = 0;x1<=pow(num,1/3)+1;x1++)
	{
		for(x2 = 0;x2<=pow(num,1/3)+1;x2++)
		{
			for(x3 = 0;x3<=pow(num,1/3)+1;x3++)
			{
				for(x4 = 0;x4<=pow(num,1/3)+1;x4++)
				{
					for(x5 = 0;x5<=pow(num,1/3)+1;x5++)
					{
						for(x6 = 0;x6<=pow(num,1/3)+1;x6++)
						{
							for(x7 = 0;x7<=pow(num,1/3)+1;x7++)
							{
								for(x8 = 0;x8<=pow(num,1/3)+1;x8++)
								{
									sum = pow(x1,3)+pow(x2,3)+pow(x3,3)+pow(x4,3)+pow(x5,3)+pow(x6,3)+pow(x7,3)+pow(x8,3);
									//printf("sum = %d,x1 = %d,x2 = %d,x3 = %d,x4 = %d,x5 = %d,x6 = %d,x7 = %d,x8 = %d\n",sum,x1,x2,x3,x4,x5,x6,x7,x8);
									if(sum==23)
									{
										printf("sum = %d,x1 = %d,x2 = %d,x3 = %d,x4 = %d,x5 = %d,x6 = %d,x7 = %d,x8 = %d\n",sum,x1,x2,x3,x4,x5,x6,x7,x8);
									}
									//printf("sum = %d,dif = %d\n",sum,24-sum);
								}		
							}		
						}		
					}		
				}	
			}
		}	
	}
	return 0;
}
