#include<stdio.h>
typedef struct {
	int key;
	int times;
}factor;
int cal();
int isprime(int k);
int search(factor arr[],int k,int l);
int main()
{
	int C=0,i=0,ans=0;
	scanf("%d",&C);
	for(i=0;i<C;i++)
	{
		ans=cal();
		if(i!=0)
		{printf("\n");}
		printf("%d",ans);
	}
	return 0;
}
int cal()
{
	factor arr[1000]={0};
	int N=0,ans=1,k=0,j=0,l=0,num=0,flag=0,tem=0,last=0,index=0;
	scanf("%d",&N);
	if(N==1) 
	{
		scanf("%d",&num);
		return num;
	}
	for(j=0;j<N;j++)
	{
		scanf("%d",&num);
		tem=0;
		while(num!=1)
		{
			flag=0;
			for(k=2;k<=num&&flag==0;k++)
			{
				if(num%k==0&&isprime(k))
				{
					flag=1;
					if(arr[0].key==0)
					{
						arr[0].key=k;arr[0].times=1;tem=1;
					}
					else
					{
						index=search(arr,k,l);
						if(index==-1)
						{
							l++;arr[l].key=k;arr[l].times=1;tem=0;
						}
						else
						{
							if(k!=last)tem=0;
							tem++;
							if(tem>arr[index].times)arr[index].times=tem;
						}
					}
					last=k;
				}
			}
			k--;
			num/=k;
		}
	}
	for(j=0;j<=l;j++)
		for(k=0;k<arr[j].times;k++)
			ans*=arr[j].key;
	return ans;
}
int search(factor arr[],int k,int l)
{
	int i=0;
	for (i=0;i<=l;i++)
	{
		if(arr[i].key==k)
			return i;
	}
	return -1;
}
int isprime(int k)
{
	int i=0;
	if(k==2||k==3)return 1;
	else 
	{
		for (i=2;i<k;i++)
			if(k%i==0)
				return 0;
	}
	return 1;
}
