#include<stdio.h>
int main()
{
    int Pa=0,Pb=0,ju=0,jua=0,jub=0,i=0,flaga=0,flagb=0;
    scanf("%d %d",&Pa,&Pb);
    for(i=0;i<3;i++)
    {
        scanf("%d",&ju);
        if(ju==0)jua++;
        else jub++;
    }
    if(Pa>Pb)
    {
        if(jub==3)flagb=1;
        else flaga=1;
    }
    if(Pa<Pb)
    {
        if(jua==3)flaga=1;
        else flagb=1;
    }
    if(flaga==1)
    {
        printf("The winner is a: %d + %d",Pa,jua);
    }
    else 
    {
        printf("The winner is b: %d + %d",Pb,jub);
    }
    return 0;
}
