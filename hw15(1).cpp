#include<stdio.h>

int getString( char * source , char *strPtr[] ) ;

int main()
{
    char    str[100005];
    char    *strPtr[1005]={0};
    int        i, num ;
    
    gets(str);
    num = getString( str , strPtr ) ;
    for( i = 0 ; i < num ; i++ )
        puts(strPtr[i]);
    
    return 0;    
}






int getString( char * source , char *strPtr[] ) 
{
    int n=0,j=0;
    if(source[j]=='\0')
    {
    	while(source[j]==)
	}
    else
    {
        strPtr[n]=&source[j];
        while(source[j]!=' '&&source[j]!='\0')
        {
            j++;
        }
        source[j]='\0';
        j++,n++;
    }
    return n;
}
