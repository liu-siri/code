
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,n,flag,s,sum,num,k;
    scanf("%d%d%d",&a,&b,&n);
    for(int i=a;i<=b;i++){
        flag=1,s=i,sum=0;
        while(s!=0){
            num=s%10;
            if(num==0||num>n)
                flag=0;
            sum+=pow(10,num-1);
            s/=10;
        }
        while(sum!=0){
            k=sum%10;
            if(k!=0&&k!=1)
                flag=0;
            sum/=10;
        }
        if(flag==1)
            printf("%d\n",i);
    }
    return 0;
}

