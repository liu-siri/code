#include<stdio.h>
#include<math.h>
int main()
{
	for(int i=1000;i<10000;i++)
	{
		int s=0;
		int copy=i;
		while (i!=0)
		{
			s+=(int)pow(i%10,4);
			i/=10;
		}
		if(copy==s)
		{
			printf("%d\n",copy);
		}
		i=copy;
	}
}
