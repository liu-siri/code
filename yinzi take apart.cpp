#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,N=0,tem=0,num=0,copy=0,starter=0;
	scanf("%d",&N);
	for(i=2;i<=N;i++)
	{
		copy=N,num=0;
		if(copy%i==0)
		{
			for(j=i;copy%j==0;j++,num++)
			{
				copy/=j;
			}
		}
		if(num>tem)
		{
			tem=num;
			starter=i;
		}
	}
	printf("%d\n",tem);
	printf("%d",starter);
	for(k=starter+1;k<=starter+tem-1;k++)
	{
		printf("*%d",k);
	}
	return 0;
}
