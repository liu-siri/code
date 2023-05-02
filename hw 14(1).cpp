#include <stdio.h>
#include<string.h>
#define        MAX        48

int        getScore(char * s) ;

int main()
{
    char    input[MAX] ;
    int        score ;
    
    scanf("%s",input);
    score = getScore(input) ;
    printf("%d\n",score) ;

    return 0;
}



int      getScore(char * s) 
{
    int sum=0;
    while(*s!='\0')
    {
        if((*s)=='W')
        {
            sum+=3;
        }
        else if((*s)=='D')
        {
            sum+=1;
        }
        s++;
    }
    return sum;
}
