#include<stdio.h>
int judger(int,int,int,int,int);
void printer(int [][120],int);
int main()
{
	int n=0,num=0,flag1=0,flag2=0,x=0,y=0;
	int a[120][120]={0};
	//scanf("%d",&n);
	n=5;
	for(num=1;num<=n*n;num++)
	{
		num=17;
		if((n+1)*n/2>=num)
		{
			flag1=0;
		}
		else
		{
			flag1=1;
		}
		x=judger((n+1)*n/2,num,flag1,0,n);
		y=judger((n+1)*n/2,num,flag1,1,n);
		a[x][y]=num;
		printf("a[%d][%d]=%d\n",x,y,num); 
	}
	printer(a,n);
	return 0;
}
int judger(int A,int num,int flag1,int flag2,int n)
{
	int i,j,more,sum,ex;
	if(flag1==0)
	{
		for(i=1;i<=n&&i*(i+1)/2<=num;i++)
		{
			if(i*(i+1)/2==num)
			{
				if(flag2==0)
				{
					if(i%2==1)
					{
						return i;
					}
					if(i%2==0)
					{
						return 1;
					}
				}
				else
				{
					if(i%2==0)
					{
						return i;
					}
					if(i%2==1)
					{
						return 1;
					}
				}	
			}	
		}
		more=num-(i-1)*i/2;
		if(flag2==0)
		{
			if(i%2==1)
			{
				return more;
			}
			if(i%2==0)
			{	
				return i+1-more;
			}
		}
		if(flag2==1)
		{
			if(i%2==0)
			{
				return more;
			}
			if(i%2==1)
			{
				return i+1-more ;
			}
		}
	}
	if(flag1==1)
	{
		ex=num-A;
		for(i=1;(2*n-1-i)*i/2<=ex;i++)
		{
			if((2*n-1-i)*i/2==ex)
			{
				if(flag2==0)
				{
					if((n-i)%2==0)
					{
						return n;
					}
					if((n-i)%2==1)
					{
						return 1+i;
					}
				}
				if(flag2==1)
				{
					if((n-i)%2==0)
					{
						return 1+i;
					}
					if((n-i)%2==1)
					{
						return n;
					}
				}
			}	
		}
		more=ex-(2*n-i)*(i-1)/2;
		if((flag2==0&&(n+i)%2==0)||(flag2==1&&(n+i)%2==1))
		{
			return n+more-1;
		}
		if((flag2==0&&(n+i)%2==1)||(flag2==1&&(n+i)%2==0))
		{
			return 2+i-more;
		}
	}
 
 }
 /*	if(flag1==1)
 	{
 		ex=num-A;
 		for(i=1;(2*n-1-i)*i/2<=ex;i++)
 		{
 			if((2*n-1-i)*i/2==ex)
 			{
 				if(flag2==0)
 				{
 					if((n-i)%2==0)
 					{
 						return 1;
					 }
					 if((n-i)%2==1)
					 {
					 	return n-i;
					 }
				 }
				 if(flag2==1)
				 {
				 	if((n-i)%2==1)
				 	{
				 		return 1;
					 }
					 if((n-i)%2==0)
					 {
					 	return n-i;
					 }
				 }
			 }
		}
		more=ex-(2*n-i)*(i-1)/2;
		if(flag2==0)
		{
			if((n-i)%2==0)
			{
				return n-i-more+1;
			}
			if((n-i)%2==1)
			{
				return more;
			}
		}
		if(flag2==1)
		{
			if((n-i)%2==1)
			{
				return n-i+1-more;
			}
			if((n-i)%2==0)
			{
				return more;
			}
		}
	 }
 } */
 void printer(int a[][120],int n)
 {
 	int i,j;
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


