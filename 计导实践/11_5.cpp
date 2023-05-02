#include<stdio.h>
#include<stdlib.h>
struct node
{
	long long int data;
	node* next;
};
typedef struct node node;
node* createList();
void prioritize(node* head);
void printer(node* head);
int cmp(const void*e1,const void*e2);
//int pri_check(node* head);
int main()
{
	node* head=createList();
	prioritize(head);
	return 0;
}
node* createList()
{
	node* head=0;node* tem=0;node* p=0;node*previous=0;
	long long int num=0;
	p=(node*)malloc(sizeof(node));
	if(p!=NULL)
	{
		head=p;tem=p;previous=p;
		while(scanf("%lld",&num),num!=-1)
		{
			p=(node*)malloc(sizeof(node));
			if(p!=NULL)
			{
				tem->data=num;
				tem->next=p;
				previous=tem;
				tem=p;
			}
		}
		previous->next=NULL;
	}
	return head;
}
void prioritize(node* head)
{
	node* tem=head;
	node* p=0;
	int j=0,i=0;
	long long int number[1200]={0};
	int lab[1200]={0};
	while(tem->next!=NULL)
	{
		number[j++]=tem->data;
		tem=tem->next;
	}
	number[j]=tem->data;
	qsort(number,j+1,sizeof(long long int),cmp);
	p=(node*)malloc(sizeof(node));
	head=p;tem=p;
	for(i=0;i<=j;i++)
	{
		p=(node*)malloc(sizeof(node));
		tem->data=number[i];
		tem->next=p;
		if(i!=j)tem=p;
		else tem->next=NULL;
	}
	printer(head);
}
int cmp(const void*e1,const void*e2)
{
	return *(long long int *)e1-*(long long int*)e2;
}
void printer(node* head)
{
	node* tem=head;
	printf("The new list is:%d",tem->data);
	tem=tem->next;
	while(tem!=NULL)
	{
		printf(" %d",tem->data);
		tem=tem->next;	
	}
	printf("\n");
}
/*int pri_check(node* head)
{
	int checker=0;
	node*tem=head;
	while(tem->next!=NULL)
	{
		if((tem->next)->next==NULL)
		{
			if(tem->data>tem->next->data)
			{
				checker=1;
			}
			break;
		}
		else
		{
			if(tem->data>tem->next->data)
			{
				checker=1;
				break;
			}
		}
		tem=tem->next;
	}
	return checker;
}
node* search=0;node* tem=0;node* previous_tem=0;node*previous_search=0;
	search=head;tem=head;previous_tem=head;previous_search=head;
	int checker=0;
	while(tem!=NULL)
	{
		checker=0;
		if(!pri_check(head))break;
		previous_tem=tem;
		tem=tem->next;
		while(search!=tem)
		{
			if(search->data>tem->data)
			{
				if(search==previous_search&&search==previous_tem)
				{
					search->next=tem->next;
					tem->next=search;
					head=tem;
				}
				else if (search==previous_search&&search!=previous_tem)
				{
					previous_tem->next=tem->next;
					tem->next=search;
					head=tem;
				}
				else if(search==previous_tem)
				{
					previous_tem->next=tem->next;
					previous_search->next=tem;
					tem->next=search;
				}
				else{
					previous_tem->next=tem->next;
					previous_search->next=tem;
					tem->next=search;
				}
				break;
			}
			previous_search=search;
			search=search->next;
		}
		search=head;
		previous_search=head;
	}
	printer(head);
	free(head);*/
