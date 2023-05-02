#include<stdio.h>
int main()
{
	int m=0,n=0,i=0,j=0,num=0,flag=0;
	int instore[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&instore[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&num);
		flag=0;
		for(j=0;j<n&&flag==0;j++)
		{
			if(instore[j]==num)
			{
				if(n==1)
				{
					printf("NULL");
				}
				else if(j==0)
				{
					printf("%d",instore[1]);
				}
				else if(j==n-1)
				{
					printf("%d",instore[n-2]);
				}
				else
				{
					printf("%d %d",instore[j-1],instore[j+1]);
				}
				flag=1;
			}
		}
		if(j==n&&flag==0)
		{
			printf("NULL");
		}
		if(i!=m-1)
		{
			printf("\n");
		}
	}
	return 0;
}
