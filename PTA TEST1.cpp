#include<stdio.h>
int main()
{
    double sum=0,score=0,average=0;
    int  i=1,count=0;
    scanf("%f ",&score);
    while(score>=0)
    {
        sum=sum+score;
        average=sum/(double)(i);
        i++;
        if(score<60)
        {
            count++;
        }
        scanf("%f ",&score);
    }
    printf("Average = %.2f \n Count= %d ",average,count);
    return 0;
}
