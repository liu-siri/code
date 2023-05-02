#include<stdio.h>
#include<math.h>
int findmax(int tire[]);
int checker(int tire,int low,int dif,int max,int i);
int main()
{
    int tire[6]={0};
    int i=0,low=0,dif=0,num=0,max=0,broken=0;
    scanf("%d %d %d %d %d %d",&tire[1],&tire[2],&tire[3],&tire[4],&low,&dif);
    max=findmax(tire);
	for(i=1;i<=4;i++)
    {
        if (checker(tire[i],low,dif,max,i))
        {
            broken=i;
			num++;
        }
    }
    switch(num)
    {
        case 0:{printf("Normal");break;}
        case 1:{printf("Warning: please check #%d!",broken);break;}
        default:{printf("Warning: please check all the tires!");}
    }
}
int findmax(int tire[])
{
    int i=0,max=0;
    for(i=1;i<=4;i++)
    {
        if(tire[i]>max)
        {
            max=tire[i];
        }
    }
    return max;
}
int checker(int tire,int low,int dif,int max,int i)
{
    if(max-tire>dif||tire<low)
    {
        return i;
    }
    else 
    {
        return 0;
    }
}
    
