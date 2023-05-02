#include<stdio.h>
#include<algorithm>
#define len 5000
using namespace std;
typedef struct
{
	int c1;
	int c2;
	int price;
	int type;
}road;
bool cmp(road r1,road r2);
int find(int x,int set[]);
void merger(int x,int y,int set[]);
int main()
{
	int n=0,i=0,sum=0;
	road r[len]={0};
	int set[len]={0};
	while(scanf("%d",&n),n)
	{
		sum=0;
		for(i=0;i<n*(n-1)/2;i++)
			scanf("%d %d %d %d",&r[i].c1,&r[i].c2,&r[i].price,&r[i].type);
		sort(r,r+n*(n-1)/2,cmp);
		for(i=1;i<=n;i++)
		{
			set[i]=-1;
		}
		for(i=0;i<n*(n-1)/2;i++)
		{
			if(find(r[i].c1,set)!=find(r[i].c2,set))
			{
				merger(r[i].c1,r[i].c2,set);
				if(r[i].type==0)sum+=r[i].price;
			}	
		}
		printf("%d\n",sum);
	}
	return 0;
}
bool cmp(road r1,road r2)
{
	if(r1.type!=r2.type)return r1.type>r2.type;
	return r1.price<r2.price;
};
int find(int x,int set[])
{
	if(set[x]==-1)
		return x;
	else
		x=find(set[x],set);
}
void merger(int x,int y,int set[])
{
	int fx=0,fy=0;
	fx=find(x,set);
	fy=find(y,set);
	if(fx!=fy)
		set[fx]=fy;
}
