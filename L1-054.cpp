#include<stdio.h>
void scaner(char A[][120],int N);
void transer(char A[][120],char B[][120],int N,char tar);
int checker(char A[][120],char B[][120],int N);
int main()
{
	int N=0,i=0,j=0;
	char tar=0;
	char A[120][120]={0};
	char B[120][120]={0};
	scanf("%c %d",&tar,&N);
	getchar();
	scaner(A,N);
	transer(A,B,N,tar);
	if(checker(A,B,N))
	{
		printf("bu yong dao le\n");
	}
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			printf("%c",B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void scaner(char A[][120],int N)
{
	int i=0,j=0;
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			scanf("%c",&A[i][j]);
		}
		getchar();
	}
}
void transer(char A[][120],char B[][120],int N,char tar)
{
	int i=0,j=0;
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(A[i][j]!=' ')
			{
				B[N+1-i][N+1-j]=tar;
			}
			else
			{
				B[N+1-i][N+1-j]=' ';
			}
		}
	}
}
int checker(char A[][120],char B[][120],int N)
{
	int i=0,j=0;
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if((A[i][j]!=' '&&B[i][j]!=' ')||(A[i][j]==' '&&B[i][j]==' '))
			{;}
			else
			{
				return 0;
			}
		}
	}
	return 1;
}	
