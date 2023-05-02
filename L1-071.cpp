#include<stdio.h>
#include<math.h>
unsigned long long int cal(int num[],int N);
int main()
{
    int N=0,M=0,i=0,j=0;
    unsigned long long int ans=0; 
    int num[50]={0};
    char s[50]={0};
    scanf("%d %d",&N,&M);
    getchar();
    for(i=0;i<M;i++)
    {
        gets(s);
        for(j=0;j<N;j++)
        {
            if(s[j]=='y')num[j]=0;
            else num[j]=1;
        }
        ans=cal(num,N);
		printf("%lld\n",ans+1);
    }
}
unsigned long long int cal(int num[],int N)
{
    int i=0;
    unsigned long long int ans=0;
    for(i=0;i<N;i++)
    {
        ans+=num[i]*(int)pow(2,N-1-i);
    }
    return ans;
}
