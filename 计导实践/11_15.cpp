#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char s[10];
	int data;
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
int getLen(node*head);
void priotize(node* head);

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
	char str[5]={0};//store the tem string
	head=(node*)malloc(sizeof(node));
	head->s[0]=0;
	head->next=NULL;
	tem=head;
	while(scanf("%s",str),!(str[0]=='-'&&str[1]=='1'))
	{
		p=(node*)malloc(sizeof(node));
		strcpy(p->s,str);
		//printf("p->s=%s\n",p->s);
		p->s[1]='\0';
		p->next=NULL;
		tem->next=p;
		tem=p;
	}
	//listPrint(head,0);
	return head;
}

node* easyCreate(node* head)
{
	head=(node*)malloc(sizeof(node));
	head->s[0]=0;
	head->next=NULL;
	return head;
}

void classify(node* head_L,node* head_A,node* head_B,node* head_C)
{
	node* tem=head_L->next;
	//int type=0;//the third varible of 'add' function,0 means character,1 means number,2 means others 
	while(tem)
	{
		if((tem->s[0]>='a'&&tem->s[0]<='z')||(tem->s[0]>='A'&&tem->s[0]<='Z'))
		{
			add(head_A,tem->s[0]);//add the new member to the list A/B/C
		}
		else if(tem->s[0]>='0'&&tem->s[0]<='9')
		{
			add(head_B,tem->s[0]);
		}
		else
		{
			add(head_C,tem->s[0]);
		}
		tem=tem->next;
	}
	//listPrint(head_A,1);
	if(!judger(head_A))priotize(head_A);
	//listPrint(head_A,1);
	if(!judger(head_B))priotize(head_B);
	if(!judger(head_C))priotize(head_C);
}

void add(node* head,char c)
{
	node* search=head;
	node* p=(node*)malloc(sizeof(node));
	p->s[0]=c;p->s[1]='\0';
	p->next=NULL;
	while(search->next)
	{
		search=search->next;
	}
	search->next=p;
}

void priotize(node* head)
{
	int len=getLen(head);
	int i=0,j=0;
	node* pastPtr=head;
	node* thisPtr=pastPtr->next;
	node* nextPtr=thisPtr->next;
	for(i=0;i<len-1;i++)
	{
		pastPtr=head;
		thisPtr=head->next;
		nextPtr=thisPtr->next;
		for(j=0;j<len-1-i;j++)
		{
			if(thisPtr->s[0]>nextPtr->s[0])
			{
				pastPtr->next=thisPtr->next;
				thisPtr->next=nextPtr->next;
				nextPtr->next=thisPtr;
			}
			pastPtr=pastPtr->next;
			thisPtr=pastPtr->next;
			nextPtr=thisPtr->next;
		}
	}
}

int getLen(node*head)
{
	int len=0;
	node* tem=head->next;
	while(tem)
	{
		len+=1;
		tem=tem->next;
	}
	return len;
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
	if(head->next==NULL)return 1;
	else return 0;
}

void listPrint(node* head,int type)//type=1 means A , 2 means B ,3 means C
{
	if(type==0)printf("The list L is: ");
	else if(type==1)printf("The list A is: ");
	else if(type==2)printf("The list B is: ");
	else if(type==3)printf("The list C is: ");
	node* tem=head->next;
	printf("%c",(tem->s)[0]);
	tem=tem->next;
	while(tem)
	{
		printf(" %c",(tem->s)[0]);
		tem=tem->next;
	}
	printf("\n");
}
