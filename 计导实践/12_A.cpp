#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define len 100

char s[len][300];
char key[10][15];

int create_s(char s[][300]);
int create_key(char key[][15]);
void change(char s[][300],char key[][15],int num_s,int num_key);
void printer(char s[][300],int num_s);

int main()
{
	int num_key=0,num_s=0;
	num_s=create_s(s);
	num_key=create_key(key);
	change(s,key,num_s,num_key);
	printer(s,num_s);
	return 0;
} 

int create_s(char s[][300])//0~i-1 have value
{
	int  i=0;
	while(gets(s[i]))
	{
		i++;
	}
	/*for(int m=0;m<i;m++)
	{
		printf("%s",s[m]);
	}*/
	return i-1;
}

int create_key(char key[][15])//0~i-1 have value
{
	FILE *fp = fopen("dict.dic","r");
	int ch=0, i=0 ,j=0;
	while(ch=fgetc(fp),ch!=EOF)
	{
		if(ch=='\n'){
			i++;
			j=0;
		}
		else
		{
			key[i][j] = ch;
			j++;
		}
	}
	/*for(int m=0;m<i;m++)
	{
		printf("%s\n",key[m]);
	}  */
	return i-1;
}

void change(char s[][300],char key[][15],int num_s,int num_key)
{
	int i=0,j=0;//i control s ,j contral key ,when s[i] was searched totally(all keys tried),i++,until all s[i] is tested
	char * p=0;
	char * replacer = "!@#$%^&*";
	char  tem[120]={0};
	char*  refresh="\0";
	for(i=0;i<=num_s;i++)
	{
		for(j=0;j<=num_key;j++)
		{
			while(p=strstr(s[i],key[j]),p)
			{
				strcat(tem,p+strlen(key[j]));
				*p = '\0';
				strcat(s[i],replacer);
				strcat(s[i],tem);
				strcpy(tem,refresh);
			}
		}
	}
}

void printer(char s[][300],int num_s)
{
	int i=0;
	for(i=0;i<=num_s;i++)
	{
		printf("%s\n",s[i]);
	}
}
