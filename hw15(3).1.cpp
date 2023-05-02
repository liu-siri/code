#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define        MAX        101

char **    create1( int n ) ;
char *    create2( int n ) ;
void    sort( char** strArray , int size ) ; 

int main()
{
    char**    strArray ;
    int        n , i ;
    
    scanf("%d",&n) ;
    strArray = create1( n ) ; 
    if ( strArray != NULL ) 
    {
        for ( i = 0 ; i < n ; i++ ) 
        {
            strArray[i] = create2( MAX ) ;
            if ( strArray[i] == NULL ) return -1 ;
        }            
    }
    else return -1 ;
    
    getchar();
    
    for( i = 0 ; i < n ; i++ ) 
        gets(strArray[i]); 
        
    sort( strArray , n ) ; 
    
    for( i = 0 ; i < n ; i++ ) 
        printf("%s\n",strArray[i]); 
        
    for ( i = 0 ; i < n ; i++ )  
        free(strArray[i]) ;
    free(strArray) ;
    
    return 0;
}

char **    create1( int n ) 
{
    char** arr=(char**)(malloc(sizeof(char*)*n));
    if(arr==NULL)
    {
    	return NULL;
	}
	else
	{
		return arr;
	}
}
char *    create2( int n ) 
{
    char* arr2=(char*)(malloc(sizeof(char)*n));
    if(arr2==NULL)
    {
    	return NULL;
	}
	else
	{
		return arr2;
	}
}
void    sort( char** strArray , int size ) 
{
    int i=0,j=0;
    char *t=0;
    for(i=0;i<=size-2;i++)
    {
       for(j=0;j<=size-2-i;j++) 
       {
           if(strcmp(strArray[j],strArray[j+1])>0)
           {
               t=strArray[j];
               strArray[j]=strArray[j+1];
               strArray[j+1]=t;
           }
       }
    }
}



