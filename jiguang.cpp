#include<stdio.h>
void fuzhi(int [][100],int,int);
void eliminate(int [][100],int,int,int ,int);
int counter(int[][100],int[][100],int[][100],int ,int ,int);
int main()
{
	int w=0,x=0,h=0,q=0,i=0,j=0,ans=0;
	int x1=0,y1=0,z1=0,x2=0,y2=0,z2=0;
	int sumx[100][100]={0},sumy[100][100]={0},sumz[100][100]={0};
	scanf("%d %d %d",&w,&x,&h);
	scanf("%d",&q);
	fuzhi(sumx,w,x);
	fuzhi(sumy,x,h);
	fuzhi(sumz,w,h);
	for(i=1;i<=q;i++)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
		eliminate(sumx,x1,x2,y1,y2);
		eliminate(sumy,y1,y2,z1,z2);
		eliminate(sumz,x1,x2,z1,z2);
	}
	ans=w*x*h-counter(sumx,sumy,sumz,w,x,h);
	printf("%d",ans);
}
void fuzhi(int arr[][100],int m,int n)
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			arr[i][j]=1;
		}
	}
}
void eliminate(int arr[][100],int m1,int m2,int n1,int n2)
{
	int i,j;
	for(i=m1;i<=m2;i++)
	{
		for(j=n1;j<=n2;j++)
		{
			arr[i][j]=0;
		}
	}
}
int counter(int arr1[][100],int arr2[][100],int arr3[][100],int m,int n,int k)
{
	int i,j,l,num=0;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(l=1;l<=k;l++)
			{
				if(arr1[i][j]==0&&arr2[j][l]==0&&arr3[i][l]==0)
				{
					num++;
				}
			}
		}
	}
	return num;
}
