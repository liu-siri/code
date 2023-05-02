#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void finder(int s,int num[],int l,int strange[],int m,int lonely[],int *size);
void printer(int longly[],int counter);
int checker(int lonely[],int s,int *size);
void change(int strange[],int *size_strange,int num[],int l);
int main()
{
	int N=0,M=0,K=0,i=0,j=0,l=0,m=0,search=0,counter=0;
	int *size=&counter;
	int *size_strange=&m;
	int num[12000]={0};
	int strange[1000]={0};
	int lonely[12000]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&K);
		if(K==1)
		{
			scanf("%d",&strange[m]);
			m++;
		}
		else
		{
			for(j=0;j<K;j++)
			{
				scanf("%d",&num[l]);
				l++;
			}
		}
	}
	scanf("%d",&M);
	change(strange,size_strange,num,l);
	for(i=0;i<M;i++)
	{
		scanf("%d",&search);
		finder(search,num,l,strange,m,lonely,size);
	}
	printer(lonely,counter);
	return 0;
}
void finder(int s,int num[],int l,int strange[],int m,int lonely[],int *size)
{
	int x=0,y=0,flag=0;
	for(x=0;x<l&&flag==0;x++)
	{
		if(s==num[x])
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		if(!checker(lonely,s,size))
		{
			lonely[*size]=s;
			(*size)++;
		}
	}
	for(y=0;y<m;y++)
	{
		if(s==strange[y]&&!checker(lonely,s,size))
		{
			lonely[*size]=s;
			(*size)++;
		}
	}
}
void printer(int lonely[],int counter)
{
	int x=0;
	if(counter==0)
	{
		printf("No one is handsome");
	}
	else
	{
		for(x=0;x<counter;x++)
		{
			if(x!=0)
			{
				printf(" ");
			}
			printf("%05d",lonely[x]);
		}
	}
}
int checker(int lonely[],int s,int *size)
{
	int x=0;
	for(x=0;x<*size;x++)
	{
		if(s==lonely[x])
		{
			return 1;
		}
	}
	return 0;
}
void change(int strange[],int *size_strange,int num[],int l)
{
	int x=0,y=0,z=0,flag=0;
	for(x=0;x<*size_strange;x++)
	{
		flag=0;
		for(y=0;y<l&&flag==0;y++)
		{
			if(strange[x]==num[y])
			{
				flag=1;
				for(z=x;z<*size_strange;z++)
				{
					strange[z]=strange[z+1];
				}	
				(*size_strange)--;
			}
		}
	}
}
