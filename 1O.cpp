#include<stdio.h>
#include<algorithm>
#define len 5000
using namespace std;
typedef struct{
	int c1;
	int c2;
	int price;
}road;
bool cmp(road c1,road c2);
int find(int r,int set[]);
void merger(int c1,int c2,int set[]);
int main()
{
	int set[len]={0};
	road r[len]={0};
	int i=0,N=0,M=0,sum=0,counter=0;
	while(scanf("%d %d",&N,&M),N)
	{
		sum=0,counter=0;
		for(i=0;i<M;i++)set[i]=i;
		for(i=0;i<N;i++)
		{
			scanf("%d %d %d",&r[i].c1,&r[i].c2,&r[i].price);
		}
		sort(r,r+N,cmp);
		for(i=0;i<N;i++)
		{
			if(find(r[i].c1,set)!=find(r[i].c2,set))
			{
				merger(r[i].c1,r[i].c2,set);
				sum+=r[i].price;
			}
		}
		for(i=0;i<M;i++)
		{
			if(i==set[i])counter++;
		}
		if(counter!=1)printf("?\n");
		else {
			printf("%d\n",sum);
		}
	}
	return 0;
}
bool cmp(road c1,road c2)
{
	return c1.price<c2.price;
}
int find(int r,int set[])
{
	while(r!=set[r])
		r=set[r];
	return r;
}
void merger(int c1,int c2,int set[])
{
	int f1,f2;
	f1=find(c1,set);
	f2=find(c2,set);
	set[f1]=f2;
}
