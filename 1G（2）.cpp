#include<bits/stdc++.h>
using namespace std;
struct node{
int num1;
int num2;
double avg;
}m[1000];
bool cmp(node a,node b)
{
return a.avg>b.avg;
}
int main(){
int N,M;
double sum1,sum2;
int i;
while(scanf("%d%d",&N,&M)==2&&((M!=-1)||(N!=-1)))
{
sum1=0;sum2=N;
for(i=0;i<M;i++){

cin>>m[i].num1>>m[i].num2;
m[i].avg=m[i].num1*1.0/m[i].num2;
}
sort(m,m+M,cmp); 

for(i=0;i<M;i++)
{

    if(sum2>m[i].num2)
    {
        sum2-=m[i].num2;
        sum1+=m[i].num1;
    }
    else{
        sum1+=sum2*m[i].num1*1.0/m[i].num2;
        break;
    }
    
}
sum1=(int)((sum1*1000)+0.5)/1000.0;
printf("%.3lf\n",sum1);

}

return 0;

}
