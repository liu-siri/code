#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void arrange(char s[],int i,int j,char*ptr[]);
void compare(char**ptr,int n);
void printer(char **ptr,int n);
int main()
{
	int n=0,i=0,j=0;char*s1=0;char*s2=0;char ch=0;
	char s[1000]={0};char*ptr[100000]={0};
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		j=0;
		scanf("%c",&ch);
		while(ch!='\n')
		{
			s[j]=ch;
			j++;
			scanf("%c",&ch);
		}
		arrange(s,i,j,ptr);
	}
	compare(ptr,n);
	printer(ptr,n);
	return 0;
}
void arrange(char s[],int i,int j,char*ptr[])
{
	int m=0;
	char*PTR=(char*)malloc(sizeof(char)*j);
	for(m=0;m<j;m++)
	{
		PTR[m]=s[m];
	}
	PTR[m]='\0';
	ptr[i]=PTR;
}
void compare(char** ptr,int n)
{
	int i=0,j=0;
	char* t=0;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(strcmp(ptr[j],ptr[j+1])>0)
			{
				t=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=t;
			}
		}
	}
}
void printer(char** ptr,int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%s",ptr[i]);
		if(i!=n-1)
		{
			printf("\n");
		}
	}
}
