#include<stdio.h>

#define        MAX        100

void findMin(int M[][MAX],int x[],int n,int m);

int main()
{
    int        matrix[MAX][MAX] ; 
    int        x[MAX] ;
    int        n, m, i, j ;


    scanf( "%d%d" , &n , &m );
    for( i = 0 ; i < n ; i++ )
    {    
        for( j = 0 ; j < m ; j++ )
        {
            scanf("%d", &matrix[i][j]) ;
        }
    }
    
    findMin(matrix,x,n,m);
    
    for( i = 0 ; i < m - 1 ; i++ )
        printf( "%d " , x[i] ) ;
    printf( "%d\n" , x[i] ) ;
    
    return 0 ;
}


void findMin(int M[][MAX],int x[],int n,int m)
{
	int i=0,j=0,min=0;
	for(j=0;j<=m-1;j++)
	{
		min=M[0][j];
		for(i=0;i<=n-1;i++)
		{
			if(M[i][j]<min)
			{
				min=M[i][j];
			}
		}
		x[j]=min;
	 } 
} 

