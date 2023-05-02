#include<stdio.h>
#include<stdlib.h>
#define len 6001
typedef struct
{
	int c1;
	int c2;
	int length;
}road;
int cmp(const void* e1,const void* e2);
int find(int x,int net[]);
void merger(int net[],int x,int y);
void init(int net[],road r[]);
int main()
{
	road r[len]={0};
	int net[len]={0};
	int ans=0,N=0,i=0,count,flag,j=0;
	while(scanf("%d",&N),N)
	{
		ans=0,j=0;
		for(i=0;i<N*(N-1)/2;i++)
			scanf("%d %d %d",&r[i].c1,&r[i].c2,&r[i].length);
		qsort(r,N*(N-1)/2,sizeof(r[0]),cmp);
		for(i=0;i<N;i++)
		{
			net[i]=i;flag=1;
		}
		while(flag)
		{
			if(find(r[j].c1,net)!=find(r[j].c2,net))
			{
				merger(net,r[j].c1,r[j].c2);
				ans+=r[j].length;
			}
			j++;
			for(i=0,flag=0,count=0;i<N;i++)
			{
				if(net[i]==i)count++;
			}
			if(count!=1)flag=1;
		}
		printf("%d\n",ans);
		init(net,r);
	}
}
int cmp(const void* e1,const void* e2)
{
	return (*(road*)e1).length-(*(road*)e2).length;
}
int find(int x,int net[])
{
	int r=x;
	while(r!=net[r])
	{
		r=net[r];
	}
	return r;
}
void merger(int net[],int x,int y)
{
	int fx=0,fy=0;
	fx=find(x,net);
	fy=find(y,net);
	if(fx!=fy)
	{
		net[fx]=fy;
	}
}
void init(int net[],road r[])
{
	int i=0;
	for(i=0;i<len;i++)
	{
		net[i]=0;
		r[i].c1=0,r[i].c2=0,r[i].length=0;
	}
}
