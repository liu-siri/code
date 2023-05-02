#include<stdio.h>
#include<string.h>
 typedef struct stu
 {
     char name[12];
     char ID[12];
     int score[3];
     double avg;
 }s;
void fun(int type,s* ptr[],int i);
void add(s* ptr[],int i);
void dele(s* ptr[],int i);
void update(s* ptr[],int i);
void avg(s* ptr[],int i);
void scaner(int a[]);
int checker(s* ptr[],int i);
int sum(int a[]);
int main()
{
    int n=0,i=0,type=0;
    s STU[150]={0};
    s* ptr[150]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        ptr[i]=&STU[i];
		scanf("%d %s",&type,ptr[i]->ID);
		getchar(); 
        fun(type,ptr,i);
        if(i!=n-1)
        {
            printf("\n");
        }
    }
    return 0;
}
void fun(int type,s* ptr[],int i)
{
	switch(type)
	{
		case 1:
		{
			add(ptr,i);break;
		}
		case 2:
		{
			dele(ptr,i);break;
		}
		case 3:
		{
			update(ptr,i);break;
		}
		case 4:
		{
			avg(ptr,i);break;
		}
	}
}
void add(s* ptr[],int i)
{
		if(checker(ptr,i)==0)
		{
			scanf("%s ",ptr[i]->name);
			scaner(ptr[i]->score);
			printf("Add success");
		}
		else
		{
			printf("Students already exist");
		}
}
void dele(s* ptr[],int i)
{
	int che=checker(ptr,i);
	s ch={0};
	if(che==0)
	{
		printf("Students do not exist");
	}
	else
	{
		*ptr[che-1]=ch;
		*ptr[i]=ch;
		printf("Delete success");	
	}
}
void update(s* ptr[],int i)
{
	int che=checker(ptr,i);
	ptr[i]->ID[0]='0';
	if(che==0)
	{
		printf("Students do not exist");
	}
	else
	{
		scaner(ptr[che-1]->score);
		printf("Update success");
	}
}
void avg(s* ptr[],int i)
{
	int che=checker(ptr,i);
	ptr[i]->ID[0]='0';
	if(che==0)//||((che!=0)&&ptr[che-1]->ID[0]
	{
		printf("Students do not exist");
	}
	else
	{
		ptr[che-1]->avg=sum(ptr[che-1]->score)/3.0;
		printf("Student ID:%s\n",ptr[che-1]->ID);
		printf("Name:%s\n",ptr[che-1]->name);
		printf("Average Score:%.1lf",ptr[che-1]->avg);
	}
}
void scaner(int a[])
{
	int j=0;
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[j]);
	}
}
int checker(s* ptr[],int i)
{
	int j=0;
	for(j=0;j<=i-1;j++)
	{
		if(strcmp(ptr[j]->ID,ptr[i]->ID)==0)
		{
			return j+1;
		}
	}
	return 0;
}
int sum(int a[])
{
	int j=0,sum=0;
	for(j=0;j<3;j++)
	{
		sum+=a[j];
	}
	return sum;
}


