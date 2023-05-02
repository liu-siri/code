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
    int i=0,n=0,word=0;
    while(source[i]!='\0')
    {
        if(source[i]==' ')
        {
            word=0;
            source[i]='\0';
        }
        else
        {
            if(word==0)
            {
                word=1;
                strPtr[n]=&source[i];
                n++;
            }
        }
        i++;
    }
    return n;
}

