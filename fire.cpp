#include<stdio.h>
void scaner(int[][120],int);
int judger(int[][120],int[][120],int[][120],int);
void printer(int[][120],int);
int main()
{
	int fire[120][120]={0},stoner[120][120]={0},square[120][120]={0};
	int n=0,m=0,k=0,num=0,i=0,j=0;
	scanf("%d %d %d",&n,&m,&k);
	scaner(fire,m);
	scaner(stoner,k);
	num=judger(fire,stoner,square,n);
	printf("%d",num);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",square[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void scaner(int a[][120],int num)
{
	int i=0,x,y;
	for(i=1;i<=num;i++)
	{
		scanf("%d %d",&x,&y);
		a[x][y]=1;
	}
}
int judger(int fire[][120],int stoner[][120],int square[][120],int n)
{
	int i=0,j=0,m=0,p=0,num=0;;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(fire[i][j]==1)
			{
				for(m=i-2;m<=i+2;m++)
				{
					for(p=j-2;p<=j+2;p++)
					{
						square[i][p]=1;
						square[m][j]=1;
					}
				}
				square[i-1][j-1]=1;
				square[i-1][j+1]=1;
				square[i+1][j-1]=1;
				square[i+1][j+1]=1;
			}
			if(stoner[i][j]==1)
			{
				for(m=i-2;m<=i+2;m++)
				{
					for(p=j-2;p<=j+2;p++)
					{
						square[m][p]=1;
					}
				}
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(square[i][j]==0)
			{
				num++;
			}
		}
	}
	return num;
}
