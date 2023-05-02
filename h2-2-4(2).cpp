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
		scanf("%d %s",&type,ptr[i]->ID);//�ȶ����ͺ�ID�ţ����������ں����ж� 
		getchar(); 
        fun(type,ptr,i);
        if(i!=n-1)
        {
            printf("\n");
        }
    }
    return 0;
}
void fun(int type,s* ptr[],int i)//������뺯�� 
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
void add(s* ptr[],int i)//���뺯�� 
{
		scanf("%s ",ptr[i]->name);//�ȶ�����*ptr[i])�� 
		scaner(ptr[i]->score);//�ȶ���ptr[i]->score�� 
		int che=checker(ptr,i);//��麯��������Ŀ�Ƿ��Ѿ����� �������ڷ���0 
		s none={0};//�սṹ�� 
		if(che==0)
		{
			printf("Add success");
		}
		else
		{
			(*ptr[i])=none;//ptr�ÿ� 
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
		*ptr[che-1]=ch;//�Ѿ����ڵļ�¼�ÿ� 
		 
		printf("Delete success");	
	}
	*ptr[i]=ch;//��ǰ��¼�ÿ�
}
void update(s* ptr[],int i)
{
	int che=checker(ptr,i);
	int j=0;
	scaner(ptr[i]->score);
	s none={0};
	if(che==0)
	{
		printf("Students do not exist");	
	}
	else
	{
		for(j=0;j<4;j++)
		{
			(*ptr[che-1]).score[j]=(*ptr[i]).score[j];//����Ŀ���¼ 
		}
		printf("Update success");
	}
	(*ptr[i])=none;//����¼�ÿ� 
}
void avg(s* ptr[],int i)
{
	int che=checker(ptr,i);
	s none={0};
	*ptr[i]=none;//����¼�ÿ� 
	if(che==0)
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
	int j=0;//�����ֵ�score�� 
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[j]);
	}
}
int checker(s* ptr[],int i)//��¼���� 
{
	int j=0;
	for(j=0;j<=i-1;j++)
	{
		if(strcmp(ptr[j]->ID,ptr[i]->ID)==0)
		{
			return j+1;//����j+1,��ʵ���Ϸ��������ļ�¼��ptr[j] 
		}
	}
	return 0;//û�ҵ�����0 
}
int sum(int a[])//������ɼ��ĺ� 
{
	int j=0,sum=0;
	for(j=0;j<3;j++)
	{
		sum+=a[j];
	}
	return sum;
}


