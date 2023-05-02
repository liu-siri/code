#include<stdio.h>
#include<math.h>
void scaner(int num[],char name[][10],int N,double *p);
void cal(int num[],char name[][10],int N,double *p);
int main()
{
	int num[120]={0};
	char name[120][10]={0};
	double avg=0,*p=&avg;
	int N=0;
	scanf("%d",&N);
	getchar();
	scaner(num,name,N,p);
	cal(num,name,N,p);
	return 0;
}
void scaner(int num[],char name[][10],int N,double *p)
{
	int i=0,sum=0;
	for(i=0;i<N;i++)
	{
		scanf("%s",&name[i]);
		scanf("%d",&num[i]);
		sum+=num[i];
	}
	(*p)=sum*1.0/N;
}
void cal(int num[],char name[][10],int N,double *p)
{
	int i=0,i0=0;
	double min=10000000;
	for(i=0;i<N;i++)
	{
		if(fabs(num[i]-(*p)/2)<min)
		{
			min=fabs(num[i]-(*p)/2);
			i0=i;
		}
	}
	printf("%.0lf %s",(*p)/2,name[i0]);
}
