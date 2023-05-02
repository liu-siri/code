#include<stdio.h>
int val(int [][30],int,int);
void printer(int [][30],int);
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[30][30]={0};
	for(i=1;i<=20;i++)
	{
		a[i][1]=1;
		a[i][i]=1;
	}
	for(i=3;i<=20;i++)
	{
		for(j=2;j<=i-1;j++)
		{
			a[i][j]=val(a,i,j);
		}
	}
	printer(a,n);
	return 0;
}
int val(int a[][30],int i,int j)
{
	if(j==1||j==i)
	{
		return 1;
	}
	else
	{
		return val(a,i-1,j)+val(a,i-1,j-1);
	}
}
void printer(int a[][30],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j!=1)
			{
				printf(" ");
			}
			printf("%d",a[i][j]);
		}
		if(i!=n)
		{
			printf("\n");
		}
	}
}
