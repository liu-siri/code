#include<stdio.h>
int main()
{
	int D=0,N=0;
	scanf("%d",&D);
	N=D+2;
	if(N==8)
	{
		N=1;
	}
	else if(N==9)
	{
		N=2;
	}
	printf("%d",N);
	return 0;
}
