#include<stdio.h>
int judger(char S[],int *p);
void printer(char A[],char B[],int *a1,int *b1);
int main()
{
	char A[1000]={0};
	char B[1000]={0};
	int a=0,b=0;
	int* a1=&a;
	int* b1=&b;
	scanf("%s ",&A);
	gets(B);
	printer(A,B,a1,b1);
	return 0;
}
void printer(char A[],char B[],int *a1,int *b1)
{
	int jud1=judger(A,a1);
	int jud2=judger(B,b1);
	int con1=0,con2=0;
	if(*a1<1||*a1>1000)
	{
		jud1=0;
	}
	if(*b1<1||*b1>1000)
	{
		jud2=0;
	}
	if(jud1&&jud2)
	{
		printf("%d + %d = %d",*a1,*b1,(*a1)+(*b1));
	}
	else if(jud1&&!jud2)
	{
		printf("%d + ? = ?",*a1);
	}
	else if(!jud1&&jud2)
	{
		printf("? + %d = ?",*b1);
	}
	else
	{
		printf("? + ? = ?");
	}
}
int judger(char S[],int *p)
{
	int i=0;
	while(S[i]!='\0')
	{
		if(S[i]>='0'&&S[i]<'9')
		{
			*p=10*(*p)+S[i]-'0';
			i++;
		}
		else 
		{
			return 0;
		}
	}
	return 1;
}
