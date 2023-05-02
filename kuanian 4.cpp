#include<stdio.h>
void judger(int num[],int record[][120],int T,int N);
int checker(int num[],int N);
void printer(int num[],int N);
int main()
{
	int N=0,M=0,i=0,Ti=0,Ai=0,tem=1,counter=0;
	double Bi=0;
	int num[120]={0};//0没阳，1阳了、没打卡
	int record[120][120]={0};
	scanf("%d %d",&N,&M);
	for(i=0;i<M;i++)
	{
		scanf("%d %d %lf",&Ti,&Ai,&Bi);
		if(tem!=Ti)
		{
			judger(num,record,tem,N);
		}
		tem=Ti;
		if(Bi>=37.5)
		{
			num[Ai]=1;
		}
		record[Ai][Ti]=1;
		if(checker(num,N))
		{
			printf("1\n%d",checker(num,N));
			return 0;
		}
	}
	printer(num,N);
	return 0;
}
void judger(int num[],int record[][120],int T,int N)
{
	int i=0;
	for(i=1;i<=N;i++)
	{
		if(record[i][T]==0)
		{
			num[i]=1;
		}
	}
}
int checker(int num[],int N)
{
	int times=0,i=1,ans=0,cp=N;
	for(i=1;i<=cp;i++)
	{
		if(num[i]==0)
		{
			ans=i;
		}
		else
		{
			N--;
		}
	}
	if(N==1)
	{
		return ans;
	}
	else 
	{
		return 0;
	}
}
void printer(int num[],int N)
{
	int i=0,k=0;
	int ans[1200]={0};
	for(i=1;i<=N;i++)
	{
		if(num[i]==0)
		{
			ans[k]=i;k++;
		}
	}
	printf("%d\n",k);
	for(i=0;i<k;i++)
	{
		if(i!=0)
		{
			printf(" ");
		}
		printf("%d",ans[i]);
	}
}
