#include<stdio.h>

#define        MAX        100

int findMin(int numbers[], int first, int n) ;

int main()
{
    int        i , n , numbers[MAX];
    
    scanf( "%d" , &n ) ;
    for ( i = 0 ; i < n ; i++ )
        scanf( "%d" , &numbers[i] ) ;
    printf( "min = %d\n" , findMin( numbers , 0 , n ) ) ;

    return 0;
} 

/*define min[1000]
int findMin(int numbers[], int first, int n) 
{
    if(first==n-1)
    {
		int* p=(int *)malloc(4*n+1);
		min[first]=numbers[first];	
        return numbers[first];
    }
    else
    {
        if(findMin(numbers,first+1,n)>numbers[first])
        {
            
			return numbers[first];
        }
        else
        {
            return findMin(numbers,first+1,n);
        }
    }
}*/
int findMin(int numbers[], int first, int n) 
{
        int i=0,j=0,t=0,min=1000000000;
        int a[1000]={0};
        for(i=0;i<=n-1;i++)
        {
            a[i]=numbers[i];
            if(numbers[i]<min)
            {
                min=numbers[i];
            }
        }
        for(i=0;i<n-1;i++)
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
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
   return min;
}


