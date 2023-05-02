#include<stdio.h>
#include<stdlib.h>
#define max 1010
int judger(int node[],int n);
int cmp(const void* e1,const void* e2);
void init(int node[]);
int main()
{
	int T=0,n=0,i=0,ans=0;
	int node[max]={0};
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&node[i]);
		}
		ans=judger(node,n);
		if(ans)printf("yes\n");
		else printf("no\n");
		init(node);
	}
	return 0;
}
int judger(int node[],int n)
{
	qsort(node,n,sizeof(node[0]),cmp);
	int i=0,j=0,copy=0;
	while(node[0])
	{
		copy=node[0];node[0]=0;
		for(j=1;j<copy+1;j++)
		{
			node[j]--;
			if(node[j]<0)return 0;
		}
		qsort(node,n,sizeof(node[0]),cmp);
	}
	for(i=0;i<n;i++)
		if(node[i])return 0;
	return 1;
}
int cmp(const void* e1,const void* e2)
{
	return *(int*)e2-*(int*)e1;
}
void init(int node[])
{
	int i=0;
	for(i=0;i<max;i++)node[i]=0;
}
