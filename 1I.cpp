#include<stdio.h>
#define single 10
int main()
{
	int floor[400]={0};
	int n=0,start=0,end=0,N=0;
	int a=0,b=0,i=0,max=-1,t=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&N);
		while(N--)
		{
			scanf("%d %d",&start,&end);
			a=(start-1)/2;b=(end-1)/2;//起终点对应数组下标
			if(a>b)
			{
				t=a;a=b;b=t;
			}
			for(i=a;i<=b;i++)
			{
				floor[i]++;
				if(floor[i]>max)max=floor[i];
			}
		}
		printf("%d\n",single*max);
		for(i=0;i<=399;i++)floor[i]=0;
		max=0;
	}
	return 0;
}
