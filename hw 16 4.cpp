#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct stu
{
    char name[30];
    char num[30];
    int  score[5];
    double avg;
    int sum;
}s;
void priotize(s* ptr);
void printer(s* ptr);
int main()
{
    s STU;
    STU={0};
    s* ptr=&STU;int i=0;
    gets((*ptr).name);
    gets((*ptr).num);
	for(i=0;i<5;i++)
	{
		scanf("%d",&STU.score[i]);
		STU.sum+=STU.score[i];
	}
	(STU.avg)=(STU.sum)*1.00/5;
    priotize(ptr);
    printer(ptr);
}
void priotize(s* ptr)
{
    int i=0,t=0,j=0;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3-i;j++)
        {
             if((*ptr).score[j]<(*ptr).score[j+1])
            {
                t=(*ptr).score[j];
                (*ptr).score[j]=(*ptr).score[j+1];
                (*ptr).score[j+1]=t;
            }
        }
    }
}
void printer(s* ptr)
{
    printf("Name:%s\n",ptr->name);
    printf("ID:%s\n",ptr->num);
    printf("Score:%d %d %d %d %d\n",ptr->score[0],ptr->score[1],ptr->score[2],ptr->score[3],ptr->score[4]);
    printf("average:%.2lf total:%d",(*ptr).avg,(*ptr).sum);
}
