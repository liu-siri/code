#include<stdio.h>
int main()
{
    int n=0,i=0,sum=0;
    double avg=0;
    int score[101]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=score[i];
    }
    avg=(double)sum/n;
    printf("%.2lf",avg);
    return 0;
}
