#include<stdio.h>
#include<math.h>
typedef struct num
{
	int number[120];
	int flag[120];
}num;
void cal(num* p,int n);
int judger(int number);
int main()
{
	int n=0,i=0;
	num num1={0};
	num* p=&num1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(*p).number[i]);
	}
	cal(p,n);
	return 0;
}
void cal(num* p,int n)
{
	int i=0,j=0,count=0;
	for(i=0;i<n;i++)
	{
		p->flag[i]=1;
	}
	for(i=0;i<n;i++)
	{
		if(p->flag[i]!=0)
		{
			if(judger(p->number[i]))
			{
				for(j=i+1;j<n;j++)
				{
					if(p->number[j]%p->number[i]==0&&p->number[j]/p->number[i]!=1)
					{
						p->flag[j]=0;
					}
				}
			}
			else
			{
				p->flag[i]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(p->flag[i]==1)
		{
			if(count!=0)
			{
				printf(" ");
			}
			printf("%d",p->number[i]);
			count++;
		}
	}
}
int judger(int number)
{
	if(number==2||number==3)
	{
		return 1;
	}
	if(number==1)
	{
		return 0;
	}
	int i=0;
	for(i=2;i<=sqrt(number);i++)
	{
		if(number%i==0)
		{
			return 0;
		}
	}
	return 1;
}
