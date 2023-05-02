#include<stdio.h>
typedef struct stu
{
	char name[30];
	char ID[30];
	int score[5];
	double avg;
	int sum;
}s;
void printer(s* ptr[],int n);
void scaner(int a[],s* ptr);
int main()
{
	int n=0,i=0,j=0;;
	s STU[120]={0};
	s*ptr[120]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		ptr[i]=&STU[i];
		getchar();
		gets(ptr[i]->name);
		gets(ptr[i]->ID);
		scaner(ptr[i]->score,ptr[i]);
		ptr[i]->avg=ptr[i]->sum/5.0;
	}
	printer(ptr,n);
	return 0;
}
void printer(s* ptr[],int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		printf("Name:%s\n",ptr[i]->name);
		printf("ID:%s\n",ptr[i]->ID);
		printf("score:");
		for(j=0;j<5;j++)
		{
			if(j!=0)
			{
				printf(" ");
			}
			printf("%d",ptr[i]->score[j]);
		}
		printf("\n");
		printf("average:%.2lf total:%d\n",ptr[i]->avg,ptr[i]->sum);
		if(i!=n-1)
		{
			printf("\n");
		}
	}
}
void scaner(int a[],s* ptr)
{
	int j;
	for(j=0;j<5;j++)
	{
		scanf("%d",&a[j]);
		ptr->sum+=a[j];
	}
}
