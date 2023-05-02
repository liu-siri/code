#include<stdio.h>
#include<stdlib.h>
int** create(int**,int,int);
void scaner(int**,int,int);
void printer(int**,int,int);
void freeer(int**,int);
int main()
{
    int **a;
	int n,m;
    scanf("%d %d",&n,&m);
    a=create(a,n,m);
    scaner(a,n,m);
    printer(a,n,m);
    freeer(a,n);
    return 0;
}
int** create(int **a,int n,int m)
{
	int i;
	a=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
    {
        a[i]=(int*)malloc(sizeof(int)*m);
    }
    return a;
}
void scaner(int** a,int n,int m)
{
	int i,j,num=0;
	for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&num);
            a[i][j]=(-10)*num;
        }
    }
}
void printer(int** a,int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",a[i][j]);
            if(j!=m-1)
            {
            	printf(" ");
			}
		}
		if(i!=n-1)
		{
			printf("\n");
		}
	}
}
void freeer(int** a,int n)
{
	 int i;
	 for(i=0;i<n;i++)
    {
        free(a[i]);
    }
    free(a);
}
