#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int N=0,i=0;
	double H=0,mate=0;
	char sex=0;
	scanf("%d\n",&N);
	for(i=0;i<N;i++)
	{
		scanf("%c %lf\n",&sex,&H);
		if(sex=='M')
		{
			mate=H/1.09;
		}
		else
		{
			mate=H*1.09;
		}
		printf("%.2lf\n",mate);
	}
	return 0;
}
