#include<stdio.h>
#include<math.h>
int judger(int guess,int num1,int num2);
int main()
{
	int abA=0,abB=0,suma=0,sumb=0,ansa=0,ansb=0;
	int a_said=0,b_said=0;
	int a_guess=0,b_guess=0;
	int N=0,i=0;
	scanf("%d %d",&abA,&abB);
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d %d %d",&a_said,&a_guess,&b_said,&b_guess);
		ansa=judger(a_guess,a_said,b_said);
		ansb=judger(b_guess,a_said,b_said);
		if(ansa==1&&ansb==0)
		{
			suma++;
			if(suma>abA)
			{
				printf("A\n%d",sumb);return 0;
			}
		}
		else if(ansa==0&&ansb==1)
		{
			sumb++;
			if(sumb>abB)
			{
				printf("B\n%d",suma);return 0;
			}
		}
		
	}
	return 0;
}
int judger(int guess,int num1,int num2)
{
	if(guess==num1+num2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
