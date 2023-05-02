#include <stdio.h>
int N=0,success=0,num=0,i=0,past=0,count=0,tem=0;
int* p=&num;
void erduanshu(int,int*);
int judger(int);
int main()
 {
    scanf("%d",&N);
    while(N!=0)
    {
        num=N;
        int*p=&num;
        while(success==0)
        {
            erduanshu(num+1,p);
            if(num%N==0)
            {
                printf("%d:%d\n",N,num);
                success=1;
            }
        }
        scanf("%d",&N);
    }
    return 0;
}
void erduanshu(int i,int *p)
{
    while(judger(i)!=1)
    {
      i++;
    }
    *p=i;
}
int judger(int i)
{
    int count=0;
    past=i%10;
    i/=10;
    while(i!=0)
    {
        tem=i%10;
        if(tem!=past)
        {
            count++;

        }
        past=tem;
        i/=10;
    }
    if(count==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
