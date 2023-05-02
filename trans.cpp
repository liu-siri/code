#include<stdio.h>
int main()
{
	int n=0,i=0,t=0;
	int A[10000]={0};
	int B[10000]={0};
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&B[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		t=A[i];
		A[i]=A[B[i]];
		A[B[i]]=t;
	}
	for(i=0;i<=n-1;i++)
	{
		if(i!=0)
		{
			printf(" ");
		}
		printf("%d",A[i]);
	}
	printf("\n");
	return 0;
 } 
