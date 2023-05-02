
#include<stdio.h>

void bubbleSort(int a[],int n);


void outputData(int data[],int elementCount) ;

int main()
{
    int        n , i,    num[10010] ;
    
    scanf("%d",&n); 
    for( i = 0 ; i < n ; i++ ) 
        scanf("%d",&num[i]) ;
    outputData(num,n) ;
    bubbleSort(num,n) ; 
    outputData(num,n) ;
    return 0 ;
}




void bubbleSort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

void outputData(int data[],int elementCount) 
{
	int i;
	for(i=0;i<=elementCount-1;i++)
	{
		printf("%d",data[i]);
		if(i!=elementCount-1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

