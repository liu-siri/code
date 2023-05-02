#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
typedef struct node node;
node* createList(node* head);
int judger(node* head);
void change(node* head_a,node* head_b);
void printer(node*head_a,node*head_b);
void listPrint(node* head);
int main()
{
	node* head_a=0;
	node* head_b=0;
	head_a=createList(head_a);
	head_b=createList(head_b);
	change(head_a,head_b);
	printer(head_a,head_b);
	return 0;
}
node* createList(node* head)
{
	node* tem=0;
	node* p=0;
	int num=0;
	head=(node*)malloc(sizeof(node));
	head->data=0;
	head->next=NULL;
	tem=head;
	while(scanf("%d",&num),num!=-1)
	{
		p=(node*)malloc(sizeof(node));
		tem->next=p;
		p->data=num;
		p->next=NULL;
		tem=p;
	}
	p=(node*)malloc(sizeof(node));
	tem->next=p;
	p->data=0;p->next=NULL;
	return head;
}
int judger(node* head)
{
	if(head->next->next==NULL)return 1;
	else return 0;
}
void change(node* head_a,node* head_b)
{
	node* tema=head_a->next;
	node* temb=head_b->next;
	node* prea=head_a;
	node* preb=head_b;
	//node* search=head_a->next;//use for A longer than B ,exclude the same number
	while(tema->next&&temb->next)
	{
		if(tema->data==temb->data)
		{
			preb=temb;
			temb=temb->next;
		}
		else if(prea->data==0&&preb->data==0&&tema->data>temb->data)
		{
			preb->next=temb->next;
			prea->next=temb;
			temb->next=tema;
			tema=temb;
			temb=preb->next;
		}
		else
		{
			if(tema->data>temb->data)//1 5 6/1 3
			{
				preb=temb;
				temb=temb->next;
			}
			if(tema->data<temb->data)
			{
				if(tema->next->data>temb->data)//1 4 5/3 4
				{
					preb->next=temb->next;
					temb->next=tema->next;
					tema->next=temb;
					temb=preb->next;
				}
				else//else 1 2 5/3 4
				{
					prea=tema;
					tema=tema->next;
				}
			}
		}
	}
	if(temb->next!=NULL)
	{
		prea->next=temb;
		preb->next=(node*)malloc(sizeof(node));
		preb->next->data=0;
		preb->next->next=NULL;
	}
}
void printer(node*head_a,node*head_b)
{
	int type_a=judger(head_a);//A is blank ,then type_a = 1
	int type_b=judger(head_b);
	if(type_a==1&&type_b==1)//1 means blank
	{
		printf("There is no item in A list.\n");
		printf("There is no item in B list.\n");
	}
	if(type_a==1&&type_b==0)
	{
		printf("There is no item in A list.\n");
		printf("The new list B:");
		listPrint(head_b);
	}
	if(type_a==0&&type_b==1)
	{
		printf("The new list A:");
		listPrint(head_a);
		printf("There is no item in B list.\n");
	}
	if(type_a==0&&type_b==0)
	{
		printf("The new list A:");
		listPrint(head_a);
		printf("The new list B:");
		listPrint(head_b);
	}
}
void listPrint(node* head)
{
	node* tem=head->next;
	printf("%d",tem->data);
	tem=tem->next;
	while(tem->next!=NULL)
	{
		printf(" %d",tem->data);
		tem=tem->next;
	}
	printf("\n");
}
