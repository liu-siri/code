#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void switcher(int type);
void fun1();
void fun2();
void fun3();
void fun4();
int main()
{
	int type=0;
	scanf("%d",&type);
	switcher(type);
	return 0;
}
void switcher(int type)
{
	if(type==1)
	    fun1();
	else if(type==2)
		fun2();
	else if(type==3)
		fun3();
	else if(type==0)
		fun4();
}
void fun4()
{
	FILE* fp = fopen("dict.dic","r");
	int ch=0;
	while(ch=fgetc(fp),ch!=EOF)
	{
		printf("%c",ch);
	}
}
void fun1()
{
	FILE *fp = fopen("dict.dic","r");
	int capital = 0;
	int lowercase = 0;
	int digit = 0; 
	int others = 0;
	int ch = 0;
	while(ch=fgetc(fp),ch!=EOF)
	{
		if(ch>='A'&&ch<='Z')
			capital++;
		else if(ch>='a'&&ch<='z')
			lowercase++;
		else if(ch>='0'&&ch<='9')
			digit++;
		else
			others++;
	}
	printf("Task1:\n");
	printf("capital: %d\nlowercase: %d\ndigit: %d\nothers: %d\n",capital,lowercase,digit,others);
	fclose(fp);
}
void fun2()
{
	FILE *fp = fopen("dict.dic","r");
	int longest = -1;
	int shortest = 100000;
	int line = 0;
	int tem = 0;
	int ch = 0;
	while(ch=fgetc(fp),ch!=EOF)
	{
		if(ch == '\n')
		{
			if(tem>longest)longest = tem;
			if(tem<shortest)shortest = tem;
			line++;
			tem=0;
		}
		else{
				tem++;	
		}
	} 
	printf("Task2:\n");
	printf("line: %d\n%d characters in max line.\n%d characters in min line.",line,longest,shortest);
	fclose(fp);
}
void fun3()
{
	int time[200]={0};
	FILE* fp = fopen("dict.dic","r");
	int ch = 0;
	int i=0,j=0;
	while(ch=fgetc(fp),ch!=EOF)
	{
		time[ch]++;
	}
	printf("Task3:\n");
	printf("CAPITAL:\n");
	for(i='A';i<='Z';i++)
	{
		printf("%c:%d\n",i,time[i]);
	}
	printf("LOWERCASE:\n");
	for(j='a';j<='z';j++)
	{
		printf("%c:%d\n",j,time[j]);
	}
	fclose(fp);
}
