#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
typedef struct node node;
void printer(node* head);
node* change(node* head,int s1,int t1,int s2,int t2);
node* createList(node* head);
int main()
{
	node* head=(node*)malloc(sizeof(node));
	head=createList(head);
	int s1=0,s2=0,t1=0,t2=0;
	scanf("%d %d %d %d",&s1,&t1,&s2,&t2);
	head=change(head,s1,t1,s2,t2);
	printer(head);
	return 0;
}
node* createList(node* head)
{
	head->data=0;
	head->next=NULL;
	int num=0;
	node* tem=head;
	while(scanf("%d",&num),num!=-1)
	{
		node* p=(node*)malloc(sizeof(node));
		tem->next=p;
		p->data=num;
		p->next=NULL;
		tem=p;
	}
	node* p=(node*)malloc(sizeof(node));
	tem->next=p;p->data=0;p->next=NULL;
	//printer(head);
	return head;
}
node* change(node* head,int s1,int t1,int s2,int t2)
{
	node* tem=head;
	node*ps1d1=0;//s1-1
	node*ps1=0;
	node*pt1=0;
	node*pt1m1=0;//t1+1
	node*ps2d1=0;
	node*ps2=0;
	node*pt2=0;
	node*pt2m1=0;
	int pos=0,type=0;//0 means not near
	if(t1+1==s2)type=1;
	while(tem)
	{
		if(pos==s1-1)ps1d1=tem;
		if(pos==s1)ps1=tem;
		if(pos==t1)pt1=tem;
		if(pos==t1+1)pt1m1=tem;
		if(pos==s2-1)ps2d1=tem;
		if(pos==s2)ps2=tem;
		if(pos==t2)pt2=tem;
		if(pos==t2+1)pt2m1=tem;
		tem=tem->next;
		pos+=1;
	}
	if(type==1)//type of near
	{
		ps1d1->next=ps2;
		pt2->next=ps1;
		pt1->next=pt2m1;
	}
	else
	{
		ps1d1->next=ps2;
		pt2->next=pt1m1;
		ps2d1->next=ps1;
		pt1->next=pt2m1;
	}
	//printf("head->next->data=%d",head->next->data);
	//printer(head);
	return head;
}
void printer(node* head)
{
	node* tem=head->next;
	printf("The new list is:%d",tem->data);
	tem=tem->next;
	while(tem->next)
	{
		printf(" %d",tem->data);
		tem=tem->next;
	}
	printf("\n");
}
