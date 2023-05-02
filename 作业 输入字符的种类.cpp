#include<stdio.h>
int main()
{
    char ch=0;
    int count_1=0,count_2=0,count_3=0,count_4=0;
    scanf("%c",&ch);  
    while(ch!='/n')
    {
       if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            {
                count_1+=1;
            }
        else 
         {
             if(ch==' ')
             {
                count_2+=1;
             }
             else 
             {  
                if(ch>='0'&&ch<='9')
                {
                count_3+=1;
                }
                    else 
                    {
                        count_4+=1;
                    }
             }
         }
      scanf("%c",&ch);  
    }
    printf("%d %d %d %d",count_1,count_2,count_3,count_4);
    return 0;
}

