#include<stdio.h>
#include<math.h>
int main()
{
    double w=0,h=0,ans=0;
    scanf("%lf %lf",&w,&h);
    ans=w/pow(h,2.0);
    printf("%.1f\n",ans);
    if(ans>25)
    {
        printf("PANG");
    }
    else
    {
        printf("Hai Xing");
    }
    return 0;
}
