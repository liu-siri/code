#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct stu
{
	char name[10000][10];
	int sum[10000];
	int score[10000][3];
}stu;
void scaner(stu* p,int N);
void compare(stu* p,int N);
int main()
{
	int N=0;
	scanf("%d",&N);
	stu s={0};
	stu* p=&s;
	scaner(p,N);
	compare(p,N);
	return 0;
}
void scaner(stu* p,int N)
{
	int i=0;
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d %d",&(*p).name[i],&(*p).score[i][0],&(*p).score[i][1],&(*p).score[i][2]);
		(*p).sum[i]=(*p).score[i][0]+(*p).score[i][1]+(*p).score[i][2];
	}
}
void compare(stu* p,int N)
{
	int j=0,k=0,cod1=0,cod2=0,cod3=0,cod4=0;
	for(j=0;j<N;j++)
	{
		for(k=j+1;k<N;k++)
		{
			cod1=fabs((p->sum[j])-(p->sum[k]));
			cod2=fabs((p->score[j][0])-(p->score[k][0]));
			cod3=fabs((p->score[j][1])-(p->score[k][1]));
			cod4=fabs((p->score[j][2])-(p->score[k][2]));
			if(cod1<=10&&cod2<=5&&cod3<=5&&cod4<=5)
			{
				printf("%s %s\n",p->name[j],p->name[k]);
			}
		}
	}
}
