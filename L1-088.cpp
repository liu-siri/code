#include<stdio.h>
void prioritize(int res[],int pat[],int num[],int N,int *p);
void swap(int a[],int j);
int pro(int res[],int pat[],int num[],int N,int K,int S,int D);
int main()
{
	int res[10000]={0};
	int pat[10000]={0};
	int num[10000]={0};
	int N=0,K=0,S=0,i=0,D=0;
	int* p=&D;
	scanf("%d %d %d",&N,&K,&S);
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&res[i],&pat[i]);
	}
	prioritize(res,pat,num,N,p);
	printf("%d",pro(res,pat,num,N,K,S,D));
	return 0;
}
void prioritize(int res[],int pat[],int num[],int N,int *p)
{
	int i=0,j=0,k=0;
	for(i=0;i<=N-2;i++)
	{
		for(j=0;j<=N-2-i;j++)
		{
			if(res[j]<res[j+1])
			{
				swap(res,j);
				swap(pat,j);
			}
		}
	}
	for(i=1;i<N&&res[i-1]>=175;i++)
	{
		num[k]++;
		if(res[i]!=res[i-1])k++;
	}
	if(res[i-1]>=175)num[k]++,k++;
	(*p)=k;
}
void swap(int a[],int j)
{
	int t=0;
	t=a[j];a[j]=a[j+1];a[j+1]=t;
}
int pro(int res[],int pat[],int num[],int N,int K,int S,int D)
{
	int i=0,j=0,sum=0,ans=0,copy=0;
	for(i=0;i<=D-1;i++)
	{
		copy=num[i];
		for(j=sum;j<sum+num[i];j++)
		{
			if(res[j]>=175&&pat[j]>=S)
			{
				num[i]--;ans++;
			}
		}	
		sum+=copy;
	}
	for(i=0;i<K&&sum>=0;i++)
	{
		for(j=0;j<=D-1;j++)
		{
			if(num[j])
			{
				sum--;ans++;num[j]--;
			}
		}
	}
	return ans;
}
