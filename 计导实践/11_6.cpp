#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
typedef struct node node;
node* createList(node* head);
int find(node*head_a,node*head_b);
int search(node* a,node* b);
int main()
{
	node* head_a=createList(head_a);
	node* head_b=createList(head_b);
	if(find(head_a,head_b))printf("ListB is the sub sequence of ListA.\n");
	else printf("ListB is not the sub sequence of ListA.\n");
}
node* createList(node* head)
{
	node* p=0;node* tem=0;
	int num=0;
	head=(node*)malloc(sizeof(node));
	head->data=0;
	head->next=NULL;
	tem=head;
	while(scanf("%d",&num),num!=-1)
	{
		p=(node*)malloc(sizeof(node));
		tem->next=p;
		p->next=NULL;
		tem->next->data=num;
		tem=p;
	}
	return head;
}
int find(node*head_a,node*head_b)
{
	node* tem=head_a->next;
	node* sb=head_b->next;
	while(tem!=NULL)
	{
		if(search(tem,sb))
		{
			return 1;break;
		}
		tem=tem->next;
	}
	return 0;
}
int search(node* a,node* b)
{
	while(a&&b)
	{
		if(a->data!=b->data)return 0;
		a=a->next;
		b=b->next;
	}
	if(b==NULL)return 1;
	else return 0;
}
