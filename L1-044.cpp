#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int scaner(int R,int C,int x[][120]);
void cal(int Ra,int Ca,int A[][120],int Rb,int Cb,int B[][120]);
int main()
{
	int Ra=0,Ca=0,Rb=0,Cb=0;
	int A[120][120]={0};
	int B[120][120]={0};
	scanf("%d %d",&Ra,&Ca);
	scaner(Ra,Ca,A);
	scanf("%d %d",&Rb,&Cb);
	if(Ca!=Rb)
	{
		printf("Error: %d != %d",Ca,Rb);
	}
	else
	{
		scaner(Rb,Cb,B);
		cal(Ra,Ca,A,Rb,Cb,B);
	}
	return 0;
}
int scaner(int R,int C,int x[][120])
{
	int i=0,j=0;
	for(i=1;i<=R;i++)
	{
		for(j=1;j<=C;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
}
void cal(int Ra,int Ca,int A[][120],int Rb,int Cb,int B[][120])
{
	int ans[120][120]={0};
	int i=0,j=0,k=0,cons=Ca;
	for(i=1;i<=Ra;i++)
	{
		for(j=1;j<=Cb;j++)
		{
			for(k=1;k<=cons;k++)
			{
				ans[i][j]+=(A[i][k]*B[k][j]);
			}
		}
	}
	printf("%d %d\n",Ra,Cb);
	for(i=1;i<=Ra;i++)
	{
		for(j=1;j<=Cb;j++)
		{
			printf("%d",ans[i][j]);
			if(j!=Cb)
			{
				printf(" ");
			}
		}
		if(j==Cb+1&&i!=Ra)
		{
			printf("\n");
		}
	}
}
