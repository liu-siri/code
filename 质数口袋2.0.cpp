#include<stdio.h>
int main()
{
	int i=0,j=0,sum=0,num=0,L=0,notprime=0;
	scanf("%d",&L);
	switch(L)
	{
	case 1:
		printf("0");break;
	case 2:
		{
		printf("2\n");
		printf("1");
		break;
		}
	case 3:
		{
		printf("2\n");
		printf("1");
		break;	
		}
	default:
		while(sum<L)
		{
			for(i=2;;i++)
			{
				for(j=2;j<i;j++)
				{
					if(j%i==0)
					{
						notprime=1;
					}
				}
				if(notprime==0)
				{
					printf("%d\n",i);
					sum+=i;
					num++;
				}
			}
		}
	}
	return 0;
}
