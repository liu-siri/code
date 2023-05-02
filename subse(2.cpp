#include<stdio.h>
int scaner(int []);
int judger(int[],int[],int,int);
int main()
{
	int A[1000]={0},B[1000]={0};
	int an=0,bn=0,ans=0;
	an=scaner(A);
	bn=scaner(B);
	ans=judger(A,B,an,bn);
	if(ans==1)
	{
		printf("ListB is the sub sequence of ListA.");
	}
	else
	{
		printf("ListB is not the sub sequence of ListA.");
	}
	return 0;
}
int scaner(int arr[])
{
	int n=0,i=0;
	scanf("%d",&n);
	for(i=0;n!=-1;i++)
	{
		arr[i]=n;
		scanf("%d",&n);
	}
	return i;
}
int judger(int A[],int B[],int an,int bn)
{
	int i=0,j=0,m=0,flag=0;
	for(i=0;i<=bn-1&&flag==0;i++)
	{
		for(j=0;j<=an-1&&flag==0;j++)
		{
			if(A[j]==B[i])
			{
				for(m=1;m<=bn-1-i;m++)
				{
					if(A[j+m]!=B[i+m])
					{
						return 0;
					}
				}
				flag=1;
			}
		}
	}
	if(flag==1)
	{
		return 1;
	}
}
