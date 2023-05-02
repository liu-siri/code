#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void scaner(char* pos[],char str [],int n,int counter[],int*,int*);
void compare(char* pos[],char str [],int counter[],int n,int size_pos,int size_counter);
void printer(char* pos[],char str [],int n,int size_pos,int size_counter,int counter[]);
int main()
{
	char* pos[120]={0};char str [120000]={0};int counter[120]={0};
	int n=0,size_pos=0,size_counter=0;
	int *sizeof_pos=&size_pos;
	int *sizeof_counter=&size_counter;
	scanf("%d",&n);
	getchar();
	scaner(pos,str,n,counter,sizeof_pos,sizeof_counter);
	compare(pos,str,counter,n,size_pos,size_counter);
	printer(pos,str,n,size_pos,size_counter,counter);
	return 0;
}
void scaner(char* pos[],char str [],int n,int counter[],int *sizeof_pos,int *sizeof_counter)
{
	char s[1000]={0};
	int i=0,num=0,k=0,tem=0,j=0;
	for(i=0;i<n;i++)
	{
		gets(s);
		tem=num,j=0;
		while(s[j]!='\0')
		{
			str[num]=s[j];
			j++,num++;
		}
		pos[k]=&str[tem];
		counter[k]=j;
		k++;
	}
	*sizeof_pos=k;
	*sizeof_counter=k;
}
void compare(char* pos[],char str [],int counter[],int n,int size_pos,int size_counter)
{
	int i=0,j=0,t=0;
	char *k=0;
	for(i=0;i<=size_pos-2;i++)
	{
		for(j=0;j<=size_pos-2-i;j++)
		{
			char copy1[120000]={0};
			char copy2[120000]={0};
			strncat(copy1,pos[j],counter[j]);
			strncat(copy2,pos[j+1],counter[j+1]);
			if(strcmp(copy1,copy2)>0)
			{
				k=pos[j];
				pos[j]=pos[j+1];
				pos[j+1]=k;
				t=counter[j];
				counter[j]=counter[j+1];
				counter[j+1]=t;
			}
		}
	}
}
void printer(char* pos[],char str [],int n,int size_pos,int size_counter,int counter[])
{
	int i=0,j=0,m=0;
	for(i=0;i<size_pos;i++)
	{
		for(m=0;str[m]!='\0';m++)
		{
			if(&str[m]==pos[i])
			{
				for(j=0;j<counter[i];j++)
				{
					printf("%c",str[m+j]);
				}
				if(i!=size_pos-1)
				{
					printf("\n");
				}
			}
		}
		
	}
}
