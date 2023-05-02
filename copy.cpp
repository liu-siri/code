
#include <stdio.h>
#include <stdlib.h>

void shift(int *array , int num , int size ) ;

int main()
{
    int        i , n , p , array[100] ;
    
    scanf(" %d%d" , &n , &p ) ;
    for( i = 0 ; i < n ; i++ )
        scanf( "%d" , &array[i] ) ;

    shift( array , p , n ) ;
    for( i = 0 ; i < n - 1 ; i++ )
        printf( "%d " , array[i] ) ;
    printf( "%d\n" , array[i] ) ;
        
    return 0;    
}



void shift(int *array , int num , int size ) 
{
	int copy1[1000]={0},copy2[1000]={0};
	int i=0;
	for(i=0;i<=num-1;i++)
	{
		copy1[i]=array[i];
	}
	for(i=0;i<=size-1-num;i++)
	{
		copy2[i]=array[i+num]; 
	}
	for(i=0;i<=size-1-num;i++)
	{
		array[i]=copy2[i];
	}
	for(i=0;i<=num-1;i++)
	{
		array[i+size-num]=copy1[i];
	}
}

