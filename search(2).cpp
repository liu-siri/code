#include<stdio.h>
#include<math.h>
int a=0,b=0,c=0,sum=0,i=0,an=0,num=0,count=0,target=0;
int istarget(int,int,int,int);
int printer(int);
int main()
{
	scanf("%d%d%d",&a,&b,&c);
	for(an=a;an<=b;an++)
	{
		num=istarget(an,a,b,c);
		if(num==1)
		{
			printer(an);
			target++;
		}
	}
    if(an>b&&count%5!=0)
    {
        printf("\n");
    }
	if(target==0)
	{
		printf("There is no proper number in the interval.");
	}
	return 0;
}
int istarget(int an,int a,int b,int c)
{
	sum=1;
	if(an==1)
	{
		sum=0;
	}
	else
	{
		for(i=2;i<=sqrt(an);i++)
		{
			if(an%i==0)
			{
				if(i==sqrt(an))
				{
					sum+=sqrt(an);
				}
				else
				{
					sum+=i+an/i;
				}
			}
		}	
	}
	if(fabs(an-sum)<=c)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int printer(int an)
{
    switch(count)
    {
        case 0:
        {
            printf("%d",an);break;
        }
        default:
        {
            if(count%5==0)
            {
                printf("\n");
            }
            else 
            {
                printf("\t");
            }
            printf("%d",an);
            }
        }
    count++;
    }
