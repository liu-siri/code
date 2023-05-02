#include<stdio.h>
int main()
{
	long long int num=0,max=0,min=1000000000,tot=0;
	while(scanf("%lld",&num),num!=-1)
	{
		if(max<num)max=num;
		if(min>num)min=num;
		tot+=num;
	}
	printf("The maximum,minmum and the total are:%lld %lld %lld",max,min,tot);
}
