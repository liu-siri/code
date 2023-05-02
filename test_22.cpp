#include<stdio.h>
int main()
{
    int n=0,m=0,num=1,sum=0,re=0,div;

    
        div=1024;
        while(div!=0)
        {
            re=div%10;
            sum=sum+re*re;
            div=div/10;
        }
        printf("%d",sum);
       
        
        
        printf("\n");
    
    return 0;

}
