#include<stdio.h>
long long int judger(long long int ,long long int);
long long int judger2(long long int,long long int);
int main()
{
	long long int a=0,b=0,N=0,n=0,flag=0,num=0;
	scanf("%lld %lld %lld",&a,&b,&n);
	for(N=a;N<=b;N++)
	{
		flag=judger(N,n);
		if(flag==1&&num==0)
			{
				printf("%lld",N);
			}
		if(flag==1&&num==1)
			{
				printf("\n");
				printf("%lld",N);
			}
		if(flag==1&&num==0)
			{
				num=1;
			}
		}
	return 0;
}
long long int judger (long long int N2,long long int n)
{
	int num0=0,num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,num9=0,flager=1;
	flager=judger2(N2,n);
	while(N2!=0)
	{
		switch(N2%10)
		{
			case 0:
			{
				num0++;
				break;
			}
			case 1:
			{
				num1++;
				break;
			}
			case 2:
			{
				num2++;
				break;
			}
			case 3:
			{
				num3++;
				break;
			}
			case 4:
			{
				num4++;
				break;
			}
			case 5:
			{
				num5++;
				break;
			}
			case 6:
			{
				num6++;
				break;
			}
			case 7:
			{
				num7++;
				break;
			}
			case 8:
			{
				num8++;
				break;
			}
			case 9:
			{
				num9++;
				break;
			}	
		}
		N2/=10;
	}
	if(num0==0&&num1<2&&num2<2&&num3<2&&num4<2&&num5<2&&num6<2&&num7<2&&num8<2&&num9<2&&flager==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
long long int judger2(long long int N2,long long int n)
{
	for(int N3=N2;N3!=0;N3/=10)
	{
		if(N3%10>n)
		{
			return 0;
		}
	}
	return 1;
}
