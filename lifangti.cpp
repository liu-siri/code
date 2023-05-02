#include<stdio.h>
void fuzhi1(int[][21][21],int w,int x,int h);
void eliminate(int[][21][21],int ,int,int,int,int,int);
int counter(int[][21][21],int ,int ,int);
int main()
{
	int w=0,x=0,h=0,q=0,i=0,j=0,ans=0;
	int x1=0,y1=0,z1=0,x2=0,y2=0,z2=0;
	int lifang[21][21][21]={0};
	scanf("%d %d %d",&w,&x,&h);
	scanf("%d",&q);
	fuzhi1(lifang,w,x,h);
	for(i=1;i<=q;i++)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
		eliminate(lifang,x1,x2,y1,y2,z1,z2);
	}
	ans=counter(lifang,w,x,h);
	printf("%d",ans);
	return 0;
 } 
void fuzhi1(int lifang[][21][21],int w,int x,int h)
{
	int i,j,k;
	for(i=1;i<=w;i++)
	{
		for(j=1;j<=x;j++)
		{
			for(k=1;k<=h;k++)
			{
				lifang[i][j][k]=1;
			}
		}
	}
 } 
void eliminate(int lifang[][21][21],int x1,int x2,int y1,int y2,int z1,int z2)
{
	int i,j,k;
	for(i=x1;i<=x2;i++)
	{
		for(j=y1;j<=y2;j++)
		{
			for(k=z1;k<=z2;k++)
			{
				lifang[i][j][k]=0;
			}
		}
	}
}
int counter(int lifang[][21][21],int w,int x,int h)
{
	int i,j,k;
	int num=0;
	for(i=1;i<=w;i++)
	{
		for(j=1;j<=x;j++)
		{
			for(k=1;k<=h;k++)
			{
				if(lifang[i][j][k]==1)
				{
					num++;
				}
			}
		}
	}
	return num;
}
