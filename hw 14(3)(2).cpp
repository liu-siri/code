#include<stdio.h>
#include<stdlib.h>

char ** create1(int n) ;
void create2( char ** strPtr , int n ) ;
void fill(char ** strPtr , int n) ;


int main()
{
    int        n, i, j;
    char**    strPtr ;

    scanf("%d", &n );
    strPtr = create1( n * 2 + 1 ) ;
    create2( strPtr ,  n * 2 + 1 ) ;
    fill(strPtr , n) ;

    for (i = 0; i < 2 * n + 1; i++)
    {
        if(strPtr[i][j]=' ')
        {
        	printf("1");
		}
		else
		{
			printf("%c\n" , strPtr[i][j]);
		}
    }
    
    for ( i = 0 ; i < n * 2 + 1 ; i++ )
        free(strPtr[i]) ;
    free(strPtr) ;

    return 0;
}



char ** create1(int n) 
{
	char** p=(char**)malloc(sizeof(char*)*n);
    if(p==NULL)
    {
    	return NULL;
	}
	else
	{
		return p;
	}
}
#include<math.h>
void create2( char ** strPtr , int n ) 
{
    int i=0;
	for(i=0;i<=n-1;i++)
    {
       strPtr[i]=(char*)malloc(sizeof(char)*(n+1));
    }
}
void fill(char ** strPtr , int n)
{
    int i=0,j=0;
    for(i=0;i<2*n+1;i++)
    {
		for(j=0;j<=2*n+1;j++)
		{
		strPtr[i][j]=' ';
		}
		strPtr[i][j]='\0';
	}
	for(i=0;i<=2*n;i++)
    {
        for(j=0;j<=2*n;j++)
        {
            if((i==0&&j==n)||(i==n&&(j==0||j==2*n))||(i==2*n&&j==n))
            {
                strPtr[i][j]='X';
            }
			else if((i+j==n&&i<n)||(i>n&&i+j==n*3))
			{
				strPtr[i][j]='/';
			}
            else if(fabs(i-j)==n)
			{
				strPtr[i][j]='\\';   
        	}
        }
    }
}
