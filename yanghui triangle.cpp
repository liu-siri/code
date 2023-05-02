#include<stdio.h>
#define row 10
void print(int);
void my_switch(int);
int i=0,j=0;
int a[10000]={0};
int b[10000]={0};
int main()
{
	void my_switch();
	void  print();	
	return 0;
}
void my_switch(int j)
	{
		for(j=1;j<=row;j++)
		{
			switch(j)
			{
				case 1:
					{
						a[0]=0;
						printf("%d\n",a[0]);
						break;
					}
				default:
					{
						print(j);
					}
			}
		}
	}
void print(int j)
{
	for(i=0;i<j-1;i++)
	{
		b[i]=a[i];
	}
	for(i=1;i<j-1;i++)
	{
		a[i]=b[i-1]+b[i];
	}
	if(i==j-1)
	{
		a[i]=1;
	}
	for(i=0;i<j;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}	

