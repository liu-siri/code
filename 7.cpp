#include<stdio.h>
#include<math.h>
int main()
{
	int n=0,sum=0,i=0,j=0;
	int a[10000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			sum+=fabs(a[i]-a[j]);
		}
	}
	printf("%d",sum);
	return 0;
}
