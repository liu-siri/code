#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void getnum(int num[],FILE* fp);
void dealer(int num[],FILE* fp,int type);

int main()
{
	int type=0;
	scanf("%d",&type);
	FILE* fp = fopen("dict.dic","r");
	int num[6] = {0};
	num[0]=5;
	getnum(num,fp);
	dealer(num,fp,type);
	fclose(fp);
	return 0;
}
 
void getnum(int num[],FILE* fp)
{
	int ch=0,i=0;
	for(i=1;i<=5;i++)
	{
		ch=fgetc(fp);
		num[i]=0;
		while(ch!=10)
		{
			num[i]=num[i]*10+(ch-'0');
			ch=fgetc(fp);
		}
	}
} 

void dealer(int num[],FILE* fp,int type)
{
	int ch = 0 , Nextch = 0 ;
	int not1 = 0,not2 = 0;
	int enter = 5;
	while(enter<num[type-1])
	{
		ch=fgetc(fp);
		if(ch==10)enter++;
	}
	ch = fgetc(fp);
	Nextch = fgetc(fp);
	while(enter<num[type])//"=" nessary?
	{
		if(not2==0&&ch=='/'&&Nextch=='/')
		{
			not1=1;
		}
		else if(not1==0&&ch=='/'&&Nextch=='*')
		{
			not2=1;
		}
		else if(not1==1&&Nextch==10)
		{
			not1=0;
			ch=Nextch;
			Nextch=fgetc(fp);
		}
		else if(not2==1&&ch=='*'&&Nextch=='/')
		{
			not2=0;
			ch=Nextch;
			Nextch=fgetc(fp);
			if(Nextch==10)
			{
				enter++;
			}			
			ch=Nextch;
			Nextch=fgetc(fp);
			if(Nextch==10)
			{
				enter++;
			}
		}
		if(not1==0&&not2==0)
		{
			printf("%c",ch);
		}
		ch=Nextch;
		Nextch=fgetc(fp);
		if(Nextch==10)
		{
			enter++;
		}
		else if(Nextch==EOF)
		{
			if(not1==0&&not2==0)
			{
				printf("%c",ch);
				break;
			}
			else 
			{
				break;
			}
		}
	}
	if(not1 == 0&&not2 == 0&&Nextch==10)//? example?
	{
		printf("%c",ch);
	}
}
