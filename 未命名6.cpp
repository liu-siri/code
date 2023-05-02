#include<math.h>
long long recombination(long long num , int k) 
{
    int div1=1,div2=1,numk=0,newe=0,copy=num,n=0,i=0;
    for(copy=num;copy!=0;copy/=10,n++)
    {
        ;
    }
    div1=(int)pow(10.0,(float)(n-k+1));
    div2=(int)pow(10.0,(float)(n-k));
    numk=num/div2%10;
    newe=num-num%div1+num%div2*10+numk;
    return newe;
}
