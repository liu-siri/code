#include<stdio.h>
int main()
{
    long long int N=0,i=0;
    long long int min=1200000,max=0;
    long long int num[1200000]={0};
    long long int ab[1200000]={0};
    scanf("%lld",&N);
    for(i=0;i<N;i++)
    {
        scanf("%lld",&ab[i]);
        num[ab[i]]++;
        if(ab[i]<min)
        {
            min=ab[i];
        }
        if(ab[i]>max)
        {
            max=ab[i];
        }
    }
    printf("%lld %lld\n%lld %lld",min,num[min],max,num[max]);
}
