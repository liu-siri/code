#include<stdio.h>
int main()
{
	int ai=0,n=0,i=0;
	int arr[10000]={0};
	scanf("%d",&ai);
	while(ai!=0)
	{
		arr[n]=ai;
		n++;
		scanf("%d",&ai);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
