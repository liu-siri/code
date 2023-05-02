#include<stdio.h>
#include<math.h>
int j=0;
int isprime(int i)
{
	for(j=2;j<=i-1;j++)
	{
		if(i%j==0)
		{
			return 0;	
		}
	}
	return 1;		
}
int main()
{
	int L=0,i=0,flag=0,sum=0,num=0;
	scanf("%d",&L);
	switch(L)
	{
		case 1:
		{
			printf("0\n");
			break;
		}
		case 2:
		{
			printf("2\n1\n");
			break;
		}
		default:
		{
			for(i=2;;i++,flag=0)
			{
				if((i%2==0)&&(i!=2))
				{
					continue;
				}
				if(sum+i>L)
				{
					printf("%d",num);
					return 0;
				}
				flag=isprime(i);
				if(flag==1)
				{
					printf("%d\n",i);
					sum+=i;
					num++;
				}
		}
	}
 	}
}


