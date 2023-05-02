#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	double H=0,W=0,s=0;
	int N=0,i=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%lf %lf",&H,&W);
		W/=2;
		s=(H-100)*0.9;
		if(fabs(s-W)<0.1*s)
		{
			printf("You are wan mei!\n");
		}
		else if(W<=0.9*s)
		{
			printf("You are tai shou le!\n");
		}
		else if(W>=1.1*s)
		{
			printf("You are tai pang le!\n");
		}
	}
	return 0;
} 
