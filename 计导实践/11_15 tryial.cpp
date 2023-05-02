#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char s[3];
	struct node* next;
};
typedef struct node node;

node* createList(node* head);
node* easyCreate(node* head);
void classify(node* head_L,node* head_A,node* head_B,node* head_C);
void add(node* head,char c);
void printer(node* head_A,node* head_B,node* head_C);
int judger(node* head);
void listPrint(node* head,int type);

int main()
{
	node* head_L=0;
	node* head_A=0;
	node* head_B=0;
	node* head_C=0;
	head_L=createList(head_L);
	head_A=easyCreate(head_A);
	head_B=easyCreate(head_B);
	head_C=easyCreate(head_C);
	classify(head_L,head_A,head_B,head_C);
	printer(head_A,head_B,head_C);	
	return 0;
}

node* createList(node* head)
{
	node* p=0;
	node* tem=0;
	char str[3]={0};//store the tem string
	char END[5]="-1\0";
	char empty[3]="0\0";
	head=(node*)malloc(sizeof(node));
	head->s[0]=0;head->s[1]='\0';
	head->next=NULL;
	tem=head;
	while(scanf("%s",str),strcmp(str,END)!=0)
	{
		p=(node*)malloc(sizeof(node));
		p->data=(int)str[0];
		p->next=NULL;
		tem->next=p;
		tem=p;
		strcpy(str,empty);
	}
	tem->next=(node*)malloc(sizeof(node));
	tem->next->data=1000;
	tem->next->next=NULL;
	//listPrint(head,0);
	return head;
}

node* easyCreate(node* head)
{
	head=(node*)malloc(sizeof(node));
	head->data=0;
	head->next=(node*)malloc(sizeof(node));
	head->next->data=1000;
	head->next->next=NULL;
	return head;
}

void classify(node* head_L,node* head_A,node* head_B,node* head_C)
{
	node* tem=head_L->next;
	//int type=0;//the third varible of 'add' function,0 means character,1 means number,2 means others 
	while(tem->next)
	{
		if((tem->data>='a'&&tem->data<='z')||(tem->data>='A'&&tem->data<='Z'))
		{
			add(head_A,tem->data);//add the new member to the list A/B/C
		}
		else if(tem->data>='0'&&tem->data<='9')
		{
			add(head_B,tem->data);
		}
		else
		{
			add(head_C,tem->data);
		}
		tem=tem->next;
	}
}

void add(node* head,int num)
{
	node* search=head;
	node* p=(node*)malloc(sizeof(node));
	while(search->next)
	{
		if(search->data<=num&&search->next->data>=num)
		{
			p->next=search->next;
			search->next=p;
			p->data=num;
			break;
		}
		search=search->next;
	}
}

void printer(node* head_A,node* head_B,node* head_C)
{
	if(judger(head_A))printf("There is no item in A list.\n");
	else listPrint(head_A,1);
	if(judger(head_B))printf("There is no item in B list.\n");
	else listPrint(head_B,2);
	if(judger(head_C))printf("There is no item in C list.\n");
	else listPrint(head_C,3);
}

int judger(node* head)
{
	if(head->next->next==NULL)return 1;
	else return 0;
}

void listPrint(node* head,int type)//type=1 means A , 2 means B ,3 means C
{
	if(type==0)printf("The list L is:");
	else if(type==1)printf("The list A is:");
	else if(type==2)printf("The list B is:");
	else if(type==3)printf("The list C is:");
	node* tem=head->next;
	printf("%c",tem->data);
	tem=tem->next;
	while(tem->next)
	{
		printf(" %c",tem->data);
		tem=tem->next;
	}
	printf("\n");
}
