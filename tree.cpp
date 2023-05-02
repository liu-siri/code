#include<stdio.h>
int main()
{
	int m=0,l=0,u=0,v=0,i=0,j=0,count=0;
	int tree[100000]={0};
	scanf("%d %d",&l,&m);
	for(i=0;i<=l;i++)
	{
		tree[i]=1;
	}
	for(j=0;j<m;j++)
	{
		scanf("%d %d",&u,&v);
		for(i=u;i<=v;i++)
		{
			tree[i]=0;
		}
	}
	for(i=0;i<=l;i++)
	{
		if(tree[i]==1)
		{
			count++;
		}
	}
	printf("%d",count);
 } 
