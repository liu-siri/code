#include<stdio.h>
int judger(int,int,int ,int);
void printer(int[][120],int);
int main()
{
	int x=0,y=0,n=0,flag1=0,flag2=0,num=0;
	int a[120][120]={0};
	scanf("%d",&n);
	for(num=1;num<=n*n;num++)
	{
		if(num<=(1+n)*n/2)
		{
			flag1=0;
		}
		else
		{
			flag1=1;
		}
		x=judger(num,flag1,0,n);
		y=judger(num,flag1,1,n);
		a[x][y]=num;
	}
	printer(a,n);
	return 0;
}
int judger(int num,int flag1,int flag2,int n)
{
	int i=0,more=0,ex=0;
	if(flag1==0)
	{
		for(i=1;i<=n&&(i+1)*i/2<=num;i++)
		{
			if((i+1)*i/2==num)
			{
				if(flag2==0)
				{
					if(i%2==0)
					{
						return 1;
					}
					if(i%2==1)
					{
						return i;
					}
				}
				if(flag2==1)
				{
					 if(i%2==1)
					 {
					 	return 1;
					 }
					 if(i%2==0)
					 {
					 	return i;
					 }
				}
			}
		}
		more=num-(i-1)*i/2;
		if(flag2==0)
		{
			if(i%2==0)
			{
				return i+1-more;
			}
			if(i%2==1)
			{
				return more;
			}
		}
		if(flag2==1)
		{
			if(i%2==1)
			{
				return i+1-more;
			}
			if(i%2==0)
			{
				return more; 
			}
		}
	}
	if(flag1==1)
	{
			ex=num-n*(n+1)/2;
			for(i=1;i<=n&&(2*n-1-i)*i/2<=ex;i++)
			{
				if((2*n-1-i)*i/2==ex)
				{
					if(flag2==0)
					{
						if((n+i)%2==0)
						{
							return i+1;
						}
						if((n+i)%2==1)
						{
							return n;
						}
					}
					if(flag2==1)
					{
						if((n+i)%2==1)
						{
							return i+1;
						}
						if((n+i)%2==0)
						{
							return n;
						}
					}
				}
			}
			more=ex-(2*n-i)*(i-1)/2;
			if(flag2==0)
			{
				if((n+i)%2==0)
				{
					return n+1-more;
				}
				if((n+i)%2==1)
				{
					return more+i;
				}
			}
			if(flag2==1)
			{
				if((n+i)%2==1)
				{
					return n+1-more;
				}
				if((n+i)%2==0)
				{
					return more+i;
				}
			}
	}
}
void printer(int a[][120],int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
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
}
