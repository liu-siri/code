#include<stdio.h>
void arrange(int count[],int num[][11000],int N,int*p);
void printer(int num[][11000],int N,int *p);
int main()
{
	int count[110]={0};
	int num[110][11000]={0};
	int N=0,i=0,max=0;
	int*p=&max;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&count[i]);
	}
	arrange(count,num,N,p);
	printer(num,N,p);
	return 0;
}
void arrange(int count[],int num[][11000],int N,int*p)
{
	int i=0,j=0,k=0,n=N,flag=0;
	for(j=1;j<=N;j++)
	{
		count[j]*=10;
		if(count[j]>(*p))
		{
			(*p)=count[j];
		}
	}
	for(i=1;i<=(*p)&&flag==0;i++)
	{
		for(j=1;j<=N&&flag==0;j++)
		{
			if(count[j]!=0)
			{
				if(n==1)
				{
					
					k+=1;
					num[i][j]=k;
					i++;
					count[j]--;
					while(count[j]!=0)
					{
						k+=2;
						num[i][j]=k;
						i++;
						count[j]--;
					}
					flag=1;
				}
				else
				{
					k+=1;
					num[i][j]=k;
					count[j]--;
					if(count[j]==0)
					{
						n--;
					}
				}
			}
		}
	}
}
void printer(int num[][11000],int N,int *p)
{
	int i=0,j=0;
	for(j=1;j<=N;j++)
	{
		printf("#%d\n",j);
		for(i=1;i<=(*p);i++)
		{
			if(num[i][j]!=0)
			{
				if(i%10!=1)
				{
					printf(" ");
				}
				printf("%d",num[i][j]);
				if(i%10==0)
				{
					printf("\n");
				}
			}
		}
	}
}
