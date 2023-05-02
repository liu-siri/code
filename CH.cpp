#include<stdio.h>
int scaner(int[],int);
void printer(int[],int,int);
int main()
{
	int num[1000]={0},N=0,n=0;
	scanf("%d",&N);
	n=scaner(num,N);
	printer(num,N,n);
	return 0;
}
int scaner(int num[],int N)
{
	int i=1,sum=0,n=0;
	for(i=1;sum<N*N;i++)
	{
		scanf("%d",&num[i]);
		sum+=num[i];
		n++;
	}
	return n;
}
void printer(int num[],int N,int n)
{
	int i=0,j=0,arr[1000]={0},counter=0,copy=0;
	for(i=1;i<=n;i++)
	{
		copy=counter;
		if(i%2==1)
		{
			for(j=copy+1;j<copy+1+num[i];j++)
			{
				arr[j]=0;
				counter++;
			}
		}
		if(i%2==0)
		{
			for(j=copy+1;j<copy+1+num[i];j++)
			{
				arr[j]=1;
				counter++;
			}
		}
	}
	for(i=1;i<=counter;i++)
	{
		printf("%d",arr[i]);
		if(i%N==0)
		{
			printf("\n");
		}
	}
}
