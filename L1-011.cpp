#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void fun(char* A,char* B,int na,int nb);
int main()
{
	char A[100000]={0};
	char B[100000]={0};
	gets(A);
	gets(B);
	int na=strlen(A);
	int nb=strlen(B);
	fun(A,B,na,nb);
	printf("%s",A);
	return 0;
}
void fun(char* A,char* B,int na,int nb)
{
	int i=0,j=0,k=0;
	for(i=0;i<na;i++)
	{
		for(j=0;j<nb;j++)
		{
			if(A[i]==B[j])
			{
				for(k=i;k<na;k++)
				{
					A[k]=A[k+1];
				}
			}
		}
	}
}
