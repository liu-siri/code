#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define len 1000000
char origin[len];
char text[len];
int end1;
int end2;
int end3;
int end4;
int end5;
int end1_pos = 0;
int end2_pos = 0;
int end3_pos = 0;
int end4_pos = 0;
int end5_pos = 0;

void scaner(char origin[],char text[],int num,int *start,int* end);
void dealer(char text[]);
void print(char text[]);
void textfiller(int start,int end);

void test(char text[])
{
	for(int i=0;!(text[i]=='\0');i++)
	{
		printf("%c",text[i]);
	}
	printf("len=%d\n",strlen(text));
}

int main()
{
	int num=0;
	int starter = 0;
	int ender = 0;
	int *start = &starter;
	int *end = &ender;
	scanf("%d",&num);
	scaner(origin,text,num,start,end);//read file and write into text[]
	dealer(text);//clean all the label
	//test(text);	
	print(text);//divide the text and printer the text
	return 0;
}

void scaner(char origin[],char text[],int num,int* start,int* end)
{
	FILE* fp = fopen("dict.dic","r");
	int ch = 0;
	int i = 0;
	int m = 0;
	fscanf(fp,"%d\n%d\n%d\n%d\n%d\n",&end1,&end2,&end3,&end4,&end5);
	end1-=5;end2-=5;end3-=5;end4-=5;end5-=5;
	while(ch=fgetc(fp),ch!=EOF)//read orgin code
	{
		origin[i]=ch;
		i++;			
	}
	origin[i] = '\0';
	//test(origin);
	
	int total_n = 0;//add all the "/0"
	for(i = 0;!origin[i]=='\0';i++)//find ending of each file
	{
		if(origin[i]=='\n')total_n++;
		if(total_n==end1)end1_pos = i;
		else if(total_n==end2)end2_pos = i;
		else if(total_n==end3)end3_pos = i;
		else if(total_n==end4)end4_pos = i;
		else if(total_n==end5)end5_pos = i;
	}
	
	switch(num)//copy the right paragraph into the text[]
	{
		case 1:
			{
				*start = 0;*end = end1_pos;
				textfiller(*start,*end);
				//printf("%s",text);
				break;
			}
		case 2:
			{
				*start = end1_pos+1;*end = end2_pos;
				textfiller(*start,*end);
				break;
			}
		case 3:
			{
				*start = end2_pos+1;*end = end3_pos;
				textfiller(*start,*end);			
				break;
			}
		case 4:
			{
				*start = end3_pos+1;*end = end4_pos;
				textfiller(*start,*end);			
				break;
			}
		case 5:
			{
				*start = end4_pos+1;*end = end5_pos;
				textfiller(*start,*end);
				break;
			}
	}
	//test(text);
	/*for(m=0;m<=i+1;m++)
	{
		printf("%c",text[m]);
	}
	printf("\n");*/
	
}

void textfiller(int start,int end)
{
	int i = 0 ;
	for(i=start;i<=end;i++)
	{
		text[i-start] = origin[i];
		//printf("%c",text[i-start]);
	}
	text[i] = '\0';
	//test(text);
}


void dealer(char text[])
{
	char* linenote = "//";
	char* pre_paranote = "/*";
	char* latter_paranote = "*/";
	char* p = 0;//use for "//"
	char* p1 = 0;//use for "/*"
	char* p2 =0;//use for "*/"
	char* pos = 0;
	char* refresh = "";
	char  tem[len] = {0};
	while(p = strstr(text,linenote),pos = p,p)
	{
		while(*p != '\n')p++;
		strcat(tem,p);
		strcpy(pos,tem);
		strcpy(tem,refresh);
		//test(text);
	}
	while(p1=strstr(text,pre_paranote),p1)
	{
		if(*(p1-1)!=NULL)
			while(*(p1-1)=='\t')
				p1-=1;
		p2=strstr(text,latter_paranote);
		if(p2==NULL)
		{
			*(p1) = '\n';
			*(p1+1) = '\0';
		}
		else
		{
			strcpy(tem,p2+2);
			strcpy(p1,tem);
			strcpy(tem,refresh);
		}
	}
	//test(text);
}


void print(char text[])
{
	for(int i=0;text[i]!='\0';i++)
	{
		printf("%c",text[i]);
	}
}
