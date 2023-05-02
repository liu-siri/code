#include<stdio.h>
//#define len 100010
#define len 1001
int find(int r,int set[]);
void merger(int c1,int c2,int set[]);
int main()
{
	int c1=0,c2=0,i=0,flag=0,statue=0,counter=0;//c1,c2 represent two sides of the sidewalk
	int set[len]={0};
	scanf("%d%d",&c1,&c2);
	while(!(c1==-1&&c2==-1))
	{
		for(i=1;i<len;i++)set[i]=0;
		set[c1]=c1;set[c2]=c2;
		flag=0;
		if(statue)
		{
			scanf("%d%d",&c1,&c2);statue=0;
			if(c1==-1&&c2==-1)return 0;
			set[c1]=c1;set[c2]=c2;
		}
		while(!(c1==0&&c2==0))
		{
			if(find(c1,set)==find(c2,set))flag++;
			else merger(c1,c2,set);
			scanf("%d%d",&c1,&c2);
			if(c1==-1&&c2==-1)return 0;
		}
		statue=1;
		for(i=1,counter=0;flag==0&&i<len;i++)
		{
			if(i==set[i])counter++;
		}
		if(counter!=1)flag=1;
		if(flag)printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
int find(int r,int set[])
{
	while(r!=set[r])
		r=set[r];
	return r;
}
void merger(int c1,int c2,int set[])
{
	c1=find(c1,set);
	c2=find(c2,set);
	set[c1]=c2;
}
