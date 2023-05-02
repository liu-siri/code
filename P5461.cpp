#include<stdio.h>
#include<math.h>
void change(int arr[][600],int x_s,int x_e,int y_s,int y_e,int n);
void printer(int arr[][600],int n);
void Init(int arr[600][600],int n);
int main()
{
	int n=0,x_s=1,x_e=1,y_s=1,y_e=1;
	int arr[600][600]={0};
	int mul=0;
	scanf("%d",&n);
	mul=(int)pow(2.0,(double)n);
	x_s=1,x_e=mul,y_s=1,y_e=mul;
	Init(arr,mul);
	change(arr,x_s,x_e,y_s,y_e,mul);
	printer(arr,mul);
	return 0;
}
void Init(int arr[600][600],int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			arr[i][j]=1;
		}
	}
}
void change(int arr[][600],int x_s,int x_e,int y_s,int y_e,int n)
{
	int i=0,j=0;
	if(n==2)
	{
		arr[x_s][y_s]=0;
	}
	else
	{
		for(i=x_s;i<x_s+(x_e-x_s+1)/2;i++)
		{
			for(j=y_s;j<y_s+(y_e-y_s+1)/2;j++)
			{
				arr[i][j]=0;
			}
		}
		change(arr,x_s+(x_e-x_s+1)/2,x_e,y_s,y_s+(y_e-y_s+1)/2-1,n/2);
		change(arr,x_s,x_s+(x_e-x_s+1)/2-1,y_s+(y_e-y_s+1)/2,y_e,n/2);
		change(arr,x_s+(x_e-x_s+1)/2,x_e,y_s+(y_e-y_s+1)/2,y_e,n/2);
	}
}
void printer(int arr[][600],int n)
{
	int x=0,y=0;
	for(y=1;y<=n;y++)
	{
		for(x=1;x<=n;x++)
		{
			if(x!=1)
			{
				printf(" ");
			}
			printf("%d",arr[x][y]);
		}
		if(y!=n)
		{
			printf("\n");
		}
	}
}
