#include<stdio.h>
int main()
{
    int x=1,y=0,i=0,sum=1;
    scanf("%d %d",&x,&y);
    for(i=0;i<y;i++)
    {
        sum*=x;
    }
    printf("%d",sum);
    return 0;
}
