#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void reader(char*ori,char target[][2],int*size);
void compare(char*tem,char target[][2],int*size);
int priotize(char target[][2],char* ans,int*size);
void printer(char* ans,int size2);
int main()
{
	char ori[1000]={0};
	char target[30][2]={0};
	char ans[1000]={0};
	int size2=0,size1=0;
	int *size=&size1;
	gets(ori);
	reader(ori,target,size);
	size2=priotize(target,ans,size);
	printer(ans,size2);
}
void reader(char*ori,char target[][2],int *size)
{
	int i=0,j=0,word=0,k=0;
	char tem[100]={0};
	while(ori[j]!='.')
	{
		if(ori[j]==' ')
		{
			if(j!=0)
			{
				tem[i]='\0';
				compare(tem,target,size);
				for(k=0;k<=10;tem[k]=0,k++);
			}
			word=0;
			j++;
		}
		else
		{
			if(word==0)
			{
				i=0;
				tem[i]=ori[j];
			}
			else
			{
				tem[i]=ori[j];
			}
			word=1;
			j++;
			i++;
		}
	}
}
void compare(char*tem,char target[][2],int *size)
{
	char res1[30][10]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
	char res2[20][10]={"a","both","another","first","second","third"};
	char num1[30][10]={"01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20"};
	char num2[20][10]={"01","02","01","01","02","03"};
	int i=0,find=0;
	for(i=0;i<=19&&find==0;i++)
	{
		if(strcmp(res1[i],tem)==0)
		{
			strcpy(target[*size],num1[i]);
			find=1;
		}
	}
	for(i=0;i<=5&&find==0;i++)
	{
		if(strcmp(res2[i],tem)==0)
		{
			strcpy(target[*size],num2[i]);
			find=1;
		}
	}
	//printf("target[%d]=%s\n",*size,target[*size]);
	if(find==1)
	{
		(*size)++;
	}
}
int priotize(char target[][2],char* ans,int*size)
{
	int i=0,j=0,k=0;
	char tem[100]={0};
	for(i=0;i<=(*size)-2;i++)
	{
		for(j=0;j<=(*size)-2-i;j++)
		{
			if(strcmp(target[j],target[j+1])>0)
			{
				strcpy(tem,target[j]);
				strcpy(target[j],target[j+1]);
				strcpy(target[j+1],tem);
			}
		}
	}
	/*for(i=0;i<=*size;i++)
	{
		printf("2.0ver:target[%d]=%s\n",i,target[i]);
	}*/
	for(i=0;i<=*size-1;i++)
	{
		strcpy(&ans[k],target[i]);
		k+=2;
	}
	return k;
}
void printer(char* ans,int size2)
{
	if(size2==0)
	{
		printf("0");
	}
	else
	{
		int i=0,j=0,yu=0,answer=0;
			int finalans[1000]={0};
			for(i=0;i<=size2-2;i+=2)
			{
				yu=((ans[i]-'0')*10+(ans[i+1]-'0'))*((ans[i]-'0')*10+(ans[i+1]-'0'))%99;
				finalans[j]=yu;
				j++;
			}
			for(i=0;i<=j-1;i++)
			{
				answer=answer*100+finalans[i];
			}
			printf("%d",answer);
	}
}
