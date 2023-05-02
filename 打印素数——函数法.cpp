#include<stdio.h>
#include<math.h>
int is_prime(int i)
{
	int j=2;
	for(j=2;j<=sqrt(i);j++)
	{
		if(i%j==0)
		{
			return 0;
			break;
		}
	}
	if(j>sqrt(i))
	{
		return 1;
	}
}
 int main()
 {
 	int i,j;
	for(i=100;i<=200;i++)
	{
		if(is_prime(i)==1)
		{
			printf("%dÊÇËØÊý\n",i);
		}
	}
 	return 0;
 }
