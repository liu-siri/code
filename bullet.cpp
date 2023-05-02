#include<stdio.h>

#include<stdio.h>

#define        LEN        100
 
void distribute(int * bullets , int size , int number ) ;

int main()
{
    int        bullets[LEN] ;
    int        n , m , i ;    
         
    scanf("%d" , &n ) ;    
    for( i = 0 ; i < n ; i++ )
    {
        scanf("%d" , &bullets[i] ) ;
    }
    scanf("%d" , &m ) ;
    distribute(bullets , n , m ) ;
    for( i = 0 ; i < n - 1 ; i++ )
    {
        printf("%d " , bullets[i] ) ;
    }
    printf("%d\n" , bullets[i] ) ;
    
    return 0;    
}




void distribute(int * bullets , int size , int number ) 
{
	int i=0,j=0,copy[101]={0};
	for(j=0;j<number;j++)
	{
		for(i=0;i<=size-1;i++)
		{
			if(bullets[i]%2!=0)
			{
				bullets[i]+=1;
			}
			bullets[i]/=2;
			copy[i]=bullets[i];
		}
		for(i=1;i<=size-1;i++)
		{
			bullets[i]+=copy[i-1];
		}
		bullets[0]+=copy[size-1];
	}
}

