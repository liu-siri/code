#include<stdio.h>
#include<math.h>
int main()
{
	int i=2,j=0,sum=0,L=0;
	scanf("%d",&L);
	switch(L)
	{
		case 1:
			{
			sum=0;
			break;
			}
		case 2:
			{
			printf("2\n");
			sum=2;
			break;
			}
		default:
		{
				for(i=3;sum<=L;i++)
				{
					for(j=2;j<=sqrt(i);j++)
					{
						if(i%j==0)
						{
							break;
						}
					}
					if(i%j==0)
					{
						continue;
					}
					else
					{
						sum+=j;
						printf("%d\n",j);
					}
				}
		}	
	}
	printf("%d",sum);
	return 0;
}

	
