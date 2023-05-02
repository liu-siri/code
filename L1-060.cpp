#include<stdio.h>
int main()
{
    int x=0,y=0,s=0;
    scanf("%d %d",&x,&y);
    s=5000-0.5*100*(y+(100-x));
    printf("%d",s);
    return 0;
}
