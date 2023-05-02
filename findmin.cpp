

#include<stdio.h>

void selectSort(int data[],int elementCount) ;

int findMin(int data[], int startLoc, int endLoc) ; 


void outputData(int data[],int elementCount) ;

int main()
{
    int        n , i,    num[1010] ;
    
    scanf("%d",&n); 
    for( i = 0 ; i < n ; i++ ) 
        scanf("%d",&num[i]) ;
    selectSort(num,n) ; 
    return 0 ;
}



void selectSort(int data[],int elementCount) 
{
	int i=0,min=0,n=elementCount,t=0;
	for(i=0;i<=n-2;i++)
	{
		min=findMin(data,i,n-1);
		t=data[i];
		data[i]=data[min];
		data[min]=t;
		outputData(data,n);
	}
	
}

int findMin(int data[], int startLoc, int endLoc)
{
	int j=0,s=startLoc,e=endLoc;
	int min=s;
	for(j=s;j<=e;j++)
	{
		if(data[j]<data[min])
		{
			min=j;
		}
	}
	return min;
  }  

void outputData(int data[],int elementCount) 
{
	int i=0,n=elementCount;
	for(i=0;i<=n-1;i++)
	{
		printf("%d",data[i]);
		if(i!=n-1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

