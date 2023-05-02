#include<stdio.h>
typedef struct cal
{
	char type[100];
	int num1[100];
	int num2[100];
	int ans[100];
	int len[100];
}cal;
void scaner(cal*ptr,int i);
void calculate(cal* ptr,int i);
void printer(cal*ptr,int n);
int trans_int(char tem[]);
int length_int(int num);
int main()
{
	int n=0,i=0;
	scanf("%d",&n);
	cal c={0};
	cal* ptr=&c;
	for(i=0;i<n;i++)
	{
		scaner(ptr,i);
		getchar();
	}
	printer(ptr,n);
	return 0;
}
void scaner(cal*ptr,int i)
{
	char tem[12000]={0};
	int num=0;
	scanf("%s",tem);
	if(tem[0]!='a'&&tem[0]!='b'&&tem[0]!='c')
	{
		num=trans_int(tem);
		ptr->type[i]=ptr->type[i-1];
		ptr->num1[i]=num;
		scanf("%d",&ptr->num2[i]);
	}
	else
	{
		ptr->type[i]=tem[0];
		scanf("%d %d",&ptr->num1[i],&ptr->num2[i]);
	}
	calculate(ptr,i);
}
void calculate(cal* ptr,int i)
{
	if(ptr->type[i]=='a')
	{
		ptr->ans[i]=ptr->num1[i]+ptr->num2[i];
	}
	if(ptr->type[i]=='b')
	{
		ptr->ans[i]=ptr->num1[i]-ptr->num2[i];
	}
	if(ptr->type[i]=='c')
	{
		ptr->ans[i]=ptr->num1[i]*ptr->num2[i];
	}
	ptr->len[i]=length_int(ptr->num1[i])+length_int(ptr->num2[i])+length_int(ptr->ans[i])+2;
}
void printer(cal*ptr,int n)
{
	int j=0;
	for(j=0;j<=n-1;j++)
	{
		printf("%d",ptr->num1[j]);
		if(ptr->type[j]=='a')printf("+");
		else if(ptr->type[j]=='b')printf("-");
		else if(ptr->type[j]=='c')printf("*");
		printf("%d=%d\n",ptr->num2[j],ptr->ans[j]);
		if(ptr->ans[j]<0)
		{
			ptr->len[j]+=1;
		}
		printf("%d",ptr->len[j]);
		if(j!=n-1)
		{
			printf("\n");
		}
	}
}
int trans_int(char tem[])
{
	int num=0,j=0;
	while(tem[j]!='\0')
	{
		num=10*num+tem[j]-'0';
		j++;
	}
	return num;
}
int length_int(int num)
{
	if(num==0)
	{
		return 1;
	}
	int k=0;
	for(k=0;num!=0;k++,num/=10);
	return k;
}


