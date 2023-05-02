#include<stdio.h>
int main()
{
    char ch=0;
    int count_1=0,count_2=0,count_3=0,count_4=0;
    while((scanf("%c",&ch))!='/n')
    {
		scanf("%c",&ch);
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            {
                count_1+=1;
            }
            else if(ch==' ')
            {
                count_2+=1;
            }
            else if(ch>='0'&&ch<='9')
            {
                count_3+=1;
            }
            else 
            {
                count_3+=1;
            }
            printf("%d %d %d %d",count_1,count_2,count_3,count_4);
	}
    
    return 0;
}

