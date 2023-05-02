#include<stdio.h>
int main()
{
    int ch=0,sum=0,num3=0,num5,num7=0;
    float per3=0,per5=0,per7=0;
    scanf("%d ",&ch);
    while(ch!=0)
    {
        if((ch%5==0&&ch%7==0)||(ch%5==0&&ch%9==0)||(ch%7==0&&ch%9==0))
        {
            sum+=1;
        }
        else
        {
            if(ch%3==0)
            {
                num3+=1;
                sum+=1;
            }
            if(ch%5==0)
            {
                num5+=1;
                sum+=1;
            }
            if(ch%7==0)
            {
                num7+=1;
                sum+=1;
            }
        }
 		scanf("%d ",&ch);
    }
        per3=100*num3/sum;
        per5=100*num5/sum;
        per7=100*num7/sum;
        printf("%.2lf\n",per3);
        printf("%.2lf\n",per5);
        printf("%.2lf\n",per7);
    return 0;
}
