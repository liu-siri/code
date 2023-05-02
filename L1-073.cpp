#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun4(char s[]);
void fun6(char s[]);
int main()
{
	int len=0;
	char s[100]={0};
	gets(s);
	len=strlen(s);
	switch(len)
	{
		case 4:{fun4(s);break;}
		case 6:{fun6(s);break;}
	}
}
void fun4(char s[])
{
	char tem[5]={0};
	int year=0;
	strncpy(tem,s,2);
	year=atoi(tem);
	if(year>22)
	{
		printf("19%02d-%s",year,&s[2]);
	}
	else 
	{
		printf("20%02d-%s",year,&s[2]);
	}
}
void fun6(char s[])
{
	char tem[10]={0};
	strncpy(tem,s,4);
	printf("%s-%s",tem,&s[4]);
}
