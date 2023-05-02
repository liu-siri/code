#include<stdio.h>
#define len 1001
int find(int x,int city[]);
void merger(int x,int y,int city[]);
int main()
{
	int city[len]={0};
	int N=0,M=0,x=0,y=0,count=0,i=0;
	while(scanf("%d",&N),N)
	{
		scanf("%d",&M);
		for(i=1;i<=N;i++)city[i]=i;
		for(i=0;i<M;i++)
		{
			scanf("%d %d",&x,&y);
			merger(x,y,city);
		}
		for(count=-1,i=1;i<=N;i++)
			if(city[i]==i)count++;
		printf("%d\n",count);
	}
	return 0;
}
int find(int x,int city[])
{
	int r=x;
	while(r!=city[r])
	{
		r=city[r];
	}
	return r;
}
void merger(int x,int y,int city[])
{
	int fx=0,fy=0;
	fx=find(x,city);
	fy=find(y,city);
	if(city[fx]!=city[fy])
	{
		city[fx]=fy;
	}
}
