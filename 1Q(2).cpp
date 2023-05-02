#include<stdio.h>
#include<stdlib.h>
#define len 100001
void refresh(int set[],int flag[]);
int  merger(int node_1,int node_2,int set[]);
int findroot(int node,int set[]);
int main()
{
	int flag[len]={0};
	int set[len]={0};
	int node_1=0,node_2=0;
	int fail=0;
	refresh(set,flag);
	scanf("%d %d",&node_1,&node_2);
	while(!(node_1==-1&&node_2==-1))
	{
		if(node_1==0&&node_2==0)
		{
			if(fail==1)
				printf("No\n");
			else
				printf("Yes\n");
			refresh(set,flag);
			fail=0;
		}
		else
		{
			flag[node_1]=1;
			flag[node_2]=1;
			if(merger(node_1,node_2,set))
			{
				fail=1;
			}
		}
		scanf("%d %d",&node_1,&node_2);
	}
	return 0;
}
void refresh(int set[],int flag[])
{
	int i=0;
	for(i=0;i<=len;i++)
	{
		set[i]=i;
		flag[i]=0;
	}
}
int merger(int node_1,int node_2,int set[])
{
	int fx=0,fy=0;
	fx=findroot(node_1,set);
	fy=findroot(node_2,set);
	if(fx!=fy)
	{
		set[fx]=fy;
		return 0;
	}
	else return 1;//fx==fy loop exists
}
int findroot(int node,int set[])
{
	if(set[node]==node)
	{
		return node;
	}
	else
	{
		return findroot(set[node],set);
	}
}
