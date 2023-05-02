#include<stdio.h>
int main()
{
	int n=0,aj=0,i=0,j=0,count=0;
	int ai[10000]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ai[i]);
	}
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i-1;j++)
		{
			switch(ai[j]<ai[i])
			{
				case 1:
					{
						count++;break;
					}
				case 0:
					break;
			}
		}
		printf("%d ",count);
	}
	return 0;
}
