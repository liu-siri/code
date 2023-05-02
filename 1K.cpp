#include<stdio.h>
#include<stdlib.h>
typedef struct {
	char name[12];
	int num;
	int time;
}stu;
int cmp(const void* e1,const void* e2);
int main()
{
	stu s[1010]={0};
	int n=0,i=0,N=0,M=0,copy=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&N,&M);
		for(i=0;i<N;i++)
			scanf("%s %d %d",s[i].name,&s[i].num,&s[i].time);
		qsort(s,N,sizeof(s[0]),cmp);
		for(i=0;i<M;i++)
		{
			printf("%s %d %d\n",s[i].name,s[i].num,s[i].time);
		}
	} 
	return 0;
}
int cmp(const void* e1,const void* e2)
{
	if((*(stu*)e1).num!=(*(stu*)e2).num)return (*(stu*)e2).num-(*(stu*)e1).num;
	else return (*(stu*)e1).time-(*(stu*)e2).time;
}
