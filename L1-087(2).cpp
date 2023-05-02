#include<stdio.h>
int main()
{
	int col[1000000]={0};
	int row[1000000]={0};
	int i=0,type=0,N=0,M=0,Q=0,tem=0,rows=0,cols=0;
	scanf("%d %d %d",&N,&M,&Q);
    for(i=0;i<Q;i++)
	{
		scanf("%d %d",&type,&tem);
		if(type)col[tem]=1;
		else row[tem]=1;
	}
	for(i=1;i<=N;i++)
		if(row[i])rows++;
	for(i=1;i<=M;i++)
		if(col[i])cols++;
	printf("%d",(N-rows)*(M-cols));
}
