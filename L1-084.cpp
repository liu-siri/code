#include<stdio.h>
void scaner(int num[][10]);
void change(int num[][10]);
void printer(int num[][10]);
int main()
{
	int num[10][10]={0};
	int N=0,i=0;
	scaner(num);
	scanf("%d",&N);
	for(i=0;i<N-1;i++)
	{
		change(num);
	}
	printer(num);
	return 0;
}
void scaner(int num[][10])
{
	int a[10]={0},i=0;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&a[i]);
		num[a[i]][i]=1;
	}
}
void change(int num[][10])
{
	int i=0,j=0,flag=0;
	for(i=1;i<=6;i++)
	{
		flag=0;
		for(j=6;j>=1&&flag==0;j--)
		{
			if(!num[j][i])
			{
				num[j][i]=1;flag=1;
			}
		}
	}
}
void printer(int num[][10])
{
	int i=0,j=0,flag=0;
	for(i=1;i<=6;i++)
	{
		flag=0;
		for(j=6;j>=1&&flag==0;j--)
		{
		L1-087 ????????	if(!num[j][i])
			{
				if(i!=1)
				{
					printf(" ");
				}
				printf("%d",j);flag=1;
			}
		}
	}
}
