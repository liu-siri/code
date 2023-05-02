#include<stdio.h>
#include<stdlib.h>
#define max 110
typedef struct{
	int start;
	int end;
}time;
int cmp(const void* t1,const void* t2);
int cal(time t[],int n);
int main()
{
	int n=0,i=0,ans=0;
	time t[max]={0};
	scanf("%d",&n);
	while(n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d %d",&t[i].start,&t[i].end);
		qsort(t,n,sizeof(t[0]),cmp);
		ans=cal(t,n);
		printf("%d\n",ans);
		for(i=0;i<max;i++)
		{
			t[i].start=0,t[i].end=0;
		}
		scanf("%d",&n);
	}
	return 0;
}
int cmp(const void* t1,const void* t2)
{
	return (*(time*)t1).end-(*(time*)t2).end;
}
int cal(time t[],int n)
{
	int i=0,ans=1;
	time tem=t[0];
	for(i=1;i<n;i++)
	{
		if(t[i].start>=tem.end)
		{
			ans++;
			tem=t[i];
		}
	}
	return ans;
}
