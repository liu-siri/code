#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void account(char string[],char counter[]);
void printer(char counter[]);
int main()
{
	char string[120]={0};
	char counter[26]={0};
	int i=0,j=0;
	for(i=0;i<4;i++)
	{
		gets(string);
		account(string,counter);
	}
	printer(counter);
	return 0;
}
void account(char string[],char counter[])
{
	int k=0,len=strlen(string);
	for(k=0;k<len;k++)
	{
		if(string[k]>='A'&&string[k]<='Z')
		{
			counter[string[k]-'A']++;
		}
	}
}
void printer(char counter[])
{
	int max=0,i=0,j=0,copy=0;
	for(i=0;i<26;i++)
	{
		if(counter[i]>max)
		{
			max=counter[i];
		}
	}
	copy=max;
	for(j=0;j<copy;j++)
	{
		for(i=0;i<26;i++)
		{
			if(i!=0)
			{
				printf(" ");
			}
			if(counter[i]==max)
			{
				printf("*");
				counter[i]--;
			}
			else 
			{
				printf(" ");
			}
			if(i==25)
			{
				max--;
			}
		}
		printf("\n");
	}
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
}
