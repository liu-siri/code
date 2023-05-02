#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int i=0,j=0,N=0,K=0,F=0,max=0,index=1000;
	int judger[1020]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&K);
		for(j=0;j<K;j++)
		{
			scanf("%d",&F);
			judger[F]++;
		}
	}
	for(i=1000;i>=1;i--)
	{
		if(judger[i]>max)
		{
			max=judger[i];
			index=i;
		}
	}
	printf("%d %d",index,max);
	return 0;
}
