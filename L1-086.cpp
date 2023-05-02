#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void conduct(char a[],char s[]);
int max(int e1,int e2);
int main()
{
	char s1[100]={0};char s2[100]={0};
	char a1[100]={0};char a2[100]={0};
	gets(a1);getchar();gets(a2);
	conduct(a1,s1);
	conduct(a2,s2);
	if(!strcmp(s1,s2))printf("%s",s1);
	else printf("%s\n%s",s1,s2);	
}
void conduct(char a[],char s[])
{
	int i=0,k=0;
	for(i=1;i<strlen(a);i++)
	{
		if((a[i]-'0')%2==(a[i-1]-'0')%2)
		{
			s[k]=max((a[i]-'0'),(a[i-1]-'0'))+'0';
			k++;s[k]='\0';
		}
	}
}
int max(int e1,int e2)
{
	if(e1>e2)return e1;
	else return e2;
}
