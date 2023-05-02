
#include<stdio.h>

#define        MAX        100


void create( int array[] , int num ) ;

int main()
{
    int        A[MAX] , B[MAX] ;
    int        i , m , n , pos ;
    
    scanf( "%d%d%d" , &m , &n , &pos ) ;
    create( A , m) ;
    create( B , n) ;
      int lenA=m,lenB=n,j=0,k=0;
	    for(i=0,j=pos;i<lenB;i++)
	    {

	            for(k=lenA+i-1;k>=pos+i;k--)
	            {
	                A[k+1]=A[k];
	            }
	            A[j]=B[i];
	        j++;
	    }
    
    for ( i = 0 ; i < m + n ; i ++ )
    {
        if ( i == m + n - 1 ) printf("%d\n" , A[i]) ;
        else printf("%d " , A[i]) ;
    }

    return 0;
} 



void create( int array[] , int num )
{
    int i=0;
    for(i=0;i<=num-1;i++)
    {
        scanf("%d",&array[i]);
    }
}



