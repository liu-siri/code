#include<stdio.h>
int main()
{
	int m=0,n=0,i=0,j=0,flag=0,num=0;
	int A[10000]={0};
	int B[10000]={0};
	scanf("%d",&num);
	getchar(); 
	while(num!=-1)
	{
		A[m]=num;
		m++;
		scanf("%d",&num);
		getchar(); 
	}
	num=0; 
	scanf("%d",num);
	getchar(); 
	while(num!=-1)
	{
		B[n]=num;
		n++;
		scanf("%d",&num);
		getchar(); 
	}
	for(i=0;i<=m-1&&flag==0;i++)
	{
		if(A[i]==B[0])
		{
			flag=1;
			for(j=0;j<=n-1&&flag==1;j++)
			{
				if(A[i+j]!=B[j])
				{
					flag=0;
				}
			}
			if(j=n&&flag==1)
			{
				printf("ListB is the sub sequence of ListA.");
			}
		}
	}
	if(flag==0)
	{
		printf("ListB is not the sub sequence of ListA.");
	}
	return 0;
}

