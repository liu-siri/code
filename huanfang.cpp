#include<stdio.h>
void printer(int [][60],int ,int ,int,int);
int main()
{
	int pos[60][60]={0};
	int N=0;
	int i=0,j=0;
	scanf("%d",&N);
	pos[0][(N+1)/2-1]=1;
	printer(pos,0,(N+1)/2-1,2,N);
	for(i=0;i<=N-1;i++)
	{
		for(j=0;j<=N-1;j++)
		{
			printf("%d ",pos[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void printer(int pos[][60],int x,int y,int n,int N)
{
	if(n<=N*N)
	{
		if(x==0&&y!=N-1)
		{
			x=N-1;
			y+=1;
		}
		else if(x!=0&&y==N-1)
		{
			x-=1;
			y=0;
		}
		else if(x==0&&y==N-1)
		{
			x+=1;
		}
		else if(x!=0&&y!=N-1)
		{
			if(pos[x-1][y+1]==0)
			{
				x-=1;
				y+=1;
			}
			else
			{
				x+=1;
			}
		}
		pos[x][y]=n;
		n+=1;
		printer(pos,x,y,n,N);
	}
}
