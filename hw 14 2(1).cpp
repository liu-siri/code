#include<stdio.h>
#include<stdlib.h>
void scaner(int *,int);
void printer(int * ,int); 
int main()
{
    int n=0;
    int* arr=0;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    scaner(arr,n);
    printer(arr,n);
    free(arr);
}
void scaner(int *arr,int n)
{
    int i=0,num=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        *(arr+i)=(-10)*num;
    }
}
void printer(int *arr,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d",*(arr+i));
        if(i!=n-1)
        {
        	printf(" ");
		}
    }
}
