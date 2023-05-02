#include<stdio.h>
#include<stdlib.h>


int * create(int n) ;
void cal(int * array, int size) ;

int main()
{
    int * array , n , i ;
    
    scanf( "%d", &n );
    
    array = create(n) ;
    if ( array == NULL )
        return -1 ; 
         
    cal( array, n) ;
    for ( i = 0 ; i < n ; i++ )
    {
        printf("%d" , *(array+i) ) ;
        if ( i == n - 1 ) printf("\n") ;
        else printf(" ") ;
    }     
    
    free(array) ;
    
    return 0;
}




	int * create(int n) 
{
    int *p=0;
    p=(int*)malloc((sizeof(int)*n));
    if(p==NULL)
    {
    	return NULL;
	}
	else
	{
		return p;
	}
}
void cal(int * array, int size) 
{
    float sum=0,avg=0;
    int i=0;
    for(i=0;i<=size-1;i++)
    {
    	scanf("%d",array+i);
	}
    int max=*array,min=*array;
    for(i=0;i<=size-1;i++)
    {
        sum+=*(array+i);
        if(*(array+i)>max)
        {
            max=*(array+i);
        }
        if(*(array+i)<min)
        {
            min=*(array+i);
        }
    }
    printf("%d\n",(int)sum);
    printf("%.2f\n",sum/(1.0*size));
    printf("%d\n",max);
    printf("%d\n",min);
}

