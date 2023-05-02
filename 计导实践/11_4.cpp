#include<stdio.h>
#include<stdlib.h>
struct node
{
	long long int data;
	struct node* next;
};
int main()
{
	long long int min=1000000000,tot=0,num=0,max=-1;
	typedef struct node  node;
	node* p=0;
	node* fisrt=0;
	node* tem=0;
	p=(node*)malloc(sizeof(node)*1);
	tem=p;fisrt=p;
	while(scanf("%lld",&num),num!=-1)
	{
		node* p=(node*)malloc(sizeof(node)*1);
		if(p!=NULL)
		{
			tem->next=p;
			tem->data=num;
			if(num>max)max=num;
			if(num<min)min=num;
			tot+=num;
			tem=p;
		}
	}
	tem->next=NULL;
	printf("The maximum,minmum and the total are:%lld %lld %lld",max,min,tot);
	return 0;
}
