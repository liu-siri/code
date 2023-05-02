#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stu
{
	char name[10];
	int age;
	int score;
}s;
s cal(s now,s last); 
int main()
{
	s last[10]={0};
	s now[10]={0};
	int n=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d",&last[i].name,&last[i].age,&last[i].score);
		now[i]=cal(now[i],last[i]);
		if(i!=0)
		{
			printf("\n");
		}
		printf("%s %d %d",now[i].name,now[i].age,now[i].score);
	}	
	return 0;
}
s cal(s now,s last)
{
	strcpy(now.name,last.name);
	now.age=last.age+1;
	now.score=last.score+last.score/5;
	if(now.score>600)
	{
		now.score=600;
	}
	return now;
}
