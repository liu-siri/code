#include<stdio.h>
void scaner(int [][120],int[] ,int);
void priotize(int [][120],int[],int);
void exchange(int *,int*);
void change(int [][120],int,int,int);
void printer(int[][120],int);
int main()
{
	int n=0;
	int a[120][120]={0};
	int sum[120]={0};
	scanf("%d",&n);
	scaner(a,sum,n);
	priotize(a,sum,n);
	printer(a,n);
	return 0;
}
void scaner(int a[][120],int sum[] ,int n)
{
	int i=0,j=0,tol=0;
	for(i=0;i<=n-1;i++)
	{
		tol=0;
		for(j=0;j<=n-1;j++)
		{
			scanf("%d",&a[i][j]);
			tol+=a[i][j];
		}
		sum[i]=tol;
	}
}
void priotize(int a[][120],int sum[],int n)
{
	int i=0,j=0,t=0;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-i-2;j++)
		{
			if(sum[j]>sum[j+1])
			{
				change(a,j,j+1,n);
				exchange(&sum[j],&sum[j+1]);
			}
		}
	}
}
void change(int a[][120],int x1,int x2,int n)
{
	int k=0;
	for(k=0;k<=n-1;k++)
	{
		exchange(&a[x1][k],&a[x2][k]);
	}
}
void exchange(int * num1,int*num2)
{
	int t=0;
	t=*num1;
	*num1=*num2;
	*num2=t;
}
void printer(int a[][120],int n)
{
	int i=0,j=0;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(j!=0)
			{
				printf(" ");
			}
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

