#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int add(int ,int );
int judger(int j1,int j2);
typedef struct stu
{
	int num;
	int score1;
	int score2;	
}s;
int main()
{
	int i=0,N=0;
	s STU[10];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d %d",&STU[i].num,&STU[i].score1,&STU[i].score2);
	}
	for(i=0;i<N;i++)
	{
		if(i!=0)
		{
			printf("\n");
		}
		if(STU[i].score1+STU[i].score2>140&&judger(STU[i].score1,STU[i].score2))
		{
			printf("Excellent");
		}
		else
		{
			printf("Not excellent");
		}
	}
	return 0;
}
int add (int e1,int e2)
{
	return e1+e2;
}
int judger(int j1,int j2)
{
	if(j1*7+j2*3>800)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
