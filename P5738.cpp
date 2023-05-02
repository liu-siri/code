#include<stdio.h>
#include<stdlib.h>
void judger(int m,int n);
int main()
{
	int m=0,n=0;
	scanf("%d %d",&n,&m);
	judger(m,n);
	return 0;
}
void judger(int m,int n)
{
	int i=0,j=0;
	double maxi=0,mini=11,num=0;
	double sum=0;
	double avg=0,max=0;
	if(m<=2)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lf",&num);
			}
			sum+=num;
		}
		avg=sum/m*1.0;
		if(avg>max)
		{
			max=avg;
		}
	}
	else
	{
		for(i=0;i<n;i++)
		{
			sum=0,mini=11,maxi=0;
			for(j=0;j<m;j++)
			{
				scanf("%lf",&num);
				sum+=num;
				if(num>maxi)
				{
					maxi=num;
				}
				if(num<mini)
				{
					mini=num;
				}
			}
			sum=sum-maxi-mini;
			avg=sum/(m-2)*1.0;
			if(avg>max)
			{
				max=avg;
			}
		}
	}
	printf("%.2lf",max);
}
