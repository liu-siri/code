#include<stdio.h>
void change(int a[][20],int x,int y);
int main()
{
	int a[20][20]={0};
	int m=0,n=0,t=0,i=0,j=0,x=0,y=0;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&x,&y);
		change(a,x,y);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j!=1)
			{
				printf(" ");
			}
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void change(int a[][20],int x,int y)
{
	a[x][y]=!a[x][y];
	a[x-1][y-1]=!a[x-1][y-1];
	a[x+1][y-1]=!a[x+1][y-1];
	a[x-1][y+1]=!a[x-1][y+1];
	a[x+1][y+1]=!a[x+1][y+1];
}
