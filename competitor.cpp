#include<stdio.h>
#include<math.h>

int judger(int a[],int b[],int c[],int ,int);
int main()
{
	int chi[10000]={0};
	int mat[10000]={0};
	int eng[10000]={0};
	int i=0,j=0,N=0,num=0,ans=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d%d%d",&chi[i],&mat[i],&eng[i]);
	}
	for(i=1;i<=N;i++)
	{
		for(j=i+1;j<=N;j++)
		{
			ans=judger(chi,mat,eng,i,j);
			if(ans==1)
			{
				num++;
			}
		}
	}
	printf("%d",num);
}
int judger(int a[],int b[],int c[],int i,int j)
{
	int ans1,ans2,ans3,sumi,sumj,dif;
	ans1=fabs(a[i]-a[j]);
	ans2=fabs(b[i]-b[j]);
	ans3=fabs(c[i]-c[j]);
	sumi=a[i]+b[i]+c[i];
	sumj=a[j]+b[j]+c[j];
	dif=fabs(sumi-sumj);
	if(ans1<=5&&ans2<=5&&ans3<=5&&dif<=10)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
