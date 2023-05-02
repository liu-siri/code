#include<stdio.h>
int main()
{
	int n=0,tem=1,longest=1,i=0;
	int arr[100000]={0};
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		if(arr[i]==arr[i-1])
		{
			tem++;
			if(tem>longest)
			{
				longest=tem;
			}
		}
		else
		{
			tem=1;
		}
	}
	printf("%d",longest);
	return 0;
 } 
