#include<stdio.h>
void scaner(int[],int);
void judger(int [],int[],int ,int*,int*,int*,int*,int*,int*,int*);
int main()
{
	int prize0=0,prize1=0,prize2=0,prize3=0,prize4=0,prize5=0,prize6=0;
	int n=0,i=0,j=0,size=7;
	int get[7]={0},target[7]={0};
	scanf("%d",&n);
	scaner(target,size);
	for(i=1;i<=n;i++)
	{
		scaner(get,size);
		judger(get,target,size,&prize0,&prize1,&prize2,&prize3,&prize4,&prize5,&prize6);
	}
	printf("%d %d %d %d %d %d %d",prize0,prize1,prize2,prize3,prize4,prize5,prize6);
	return 0;
}
void scaner(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void judger(int get[],int target[],int size,int*prize0,int*prize1,int*prize2,int*prize3,int*prize4,int*prize5,int*prize6)
{
	int i=0,j=0,num=0;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(get[i]==target[j])
			{
				num++;
			}
		}
	}
	if(num==7)
	{
		*prize0+=1;
	}
	else if(num==6)
	{
		*prize1+=1;
	}
	else if(num==5)
	{
		*prize2+=1;
	}
	else if(num==4)
	{
		*prize3+=1;
	}
	else if(num==3)
	{
		*prize4+=1;
	}
	else if(num==2)
	{
		*prize5+=1;
	}
	else if(num==1)
	{
		*prize6+=1;
	}
}
