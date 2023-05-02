#include<stdio.h>
#include<math.h>
int cal(int year);
int main()
{
	int x=0,y=0,n=0,dif=0;
	scanf("%d %d",&y,&n);
	for(x=0;;x++)
	{
		dif=cal(y+x);
		if(dif==n)
		{
			printf("%d %04d",x,x+y);
			return 0;
		}
	}
}
int cal(int year)
{
	int num[4]={0};
	int judger[4]={0};
	int wei=0,i=0,j=0,counter=0;
	for(wei=0;year!=0;wei++)
	{
		num[wei]=year%10;
		year/=10;
	}
	if(wei<4)
	{
		for(i=wei;i<4;i++)
		{
			num[i]=0;
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4&&judger[i]==0;j++)
		{
			if(num[j]==num[i])
			{
				judger[j]=1;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		if(judger[i]==0)
		{
			counter++;
		}
	}
	return counter;
}
