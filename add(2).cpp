#include<stdio.h>
void scaner(int,int[]);
int counter(int,int[]);
int main()
{
	int n=0;
	int a[1000]={0};
	scanf("%d",&n);
	scaner(n,a);
	printf("%d",counter(n,a));
	return 0;
}
void scaner(int n,int a[])
{
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
}
int counter(int n,int a[])
{
	int i=0,j=0,k=0,num=0,flag=0;
	for(i=0;i<=n-1;i++)
	{
		flag=0;
		for(j=0;j<=n-2&&flag==0;j++)
		{
			if(j!=i)
			{
				for(k=j+1;k<=n-1&&flag==0;k++)
				{
					if(k!=i)
					{
						if(a[i]==a[j]+a[k])
						{
							flag=1;
						}
					}
				}
			}
		}
		if(flag==1)
		{
			num++;
		}
	}
	return num;
}
