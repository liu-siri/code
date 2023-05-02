#include<stdio.h>
int main()
{
    int N=0,i=0;
    double ans=0,sum=0,num=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%lf",&num);
        sum+=1.0/num;
    }
    ans=1/(sum*1.0/N);
    printf("%.2lf",ans);
}
