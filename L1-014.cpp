#include<stdio.h>
#include<math.h>
int main()
{
	double col=0,row=0;
	int i=0,j=0,N=0;
	char C=0;
	scanf("%d %c",&N,&C);
	col=(double)N;
	if(col/2.0>=(int)(col/2.0)+0.5)
	{
		row=(double)((int)(col/2.0)+1);
	}
	else
	{
		row=(double)(int)(col/2.0);
	}
	for(i=0;i<(int)row;i++)
	{
		for(j=0;j<(int)(col);j++)
		{
			printf("%c",C);
		}
		if(j==(int)col&&i!=(int)row-1)
		{
			printf("\n");
		}
	}
	return 0;
}
