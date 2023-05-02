#include<stdio.h>
#include<string.h>
typedef struct stu
{
	char name[30];
	int score;	
}s;
void compare(s* *,s* *);
void printer(s* ptr[],int n);
int main()
{
	int i=0,j=0,n=0;
	s STU[120]={0};
	s* ptr[120]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ptr[i]=&STU[i];
		scanf("%s",&STU[i].name);
		scanf("%d",&STU[i].score);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			s**s1=&ptr[j];
			s**s2=&ptr[j+1];
			compare(s1,s2);
		}
	}
	printer(ptr,n);
	return 0;
}
void compare(s** s1,s** s2)
{
	s* t=0;
	if(((*s1)->score)<((*s2)->score)||(((*s1)->score)==((*s2)->score)&&strcmp((*s1)->name,(*s2)->name)>0))
	{
		t=*s1;
		*s1=*s2;
		*s2=t;
	}
}
void printer(s* ptr[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("Name:%s\n",ptr[i]->name);
		printf("total:%d\n",ptr[i]->score);
		printf("\n");
	}
}
