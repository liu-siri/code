#include <stdio.h>
int i=0,j=0,ans1=0,ans2=0,m=0,sum1=0,sum2=0;
char board[3][3]={0};
int kx[3]={0},ky[3]={0},bx[3]={0},by[3]={0},x[3]={0},y[3]={0};
void counter(char,int ,int);
void printer(int ,int);
int judger(int x[],int y[],char);
int main() {
   for(i=0;i<=2;i++)
   {
       for(j=0;j<=2;j++)
       {
            scanf("%c",&board[i][j]);
            getchar();
            counter(board[i][j],i,j);
       }    
   }
	ans1=judger(kx,ky,'K');
	ans2=judger(bx,by,'B');
    printer(ans1,ans2);
}
void counter(char board,int i,int j)
{
    if(board=='K')
    {
        kx[i]++;
        ky[j]++;
    }
      if(board=='B')
    {
        bx[i]++;
        by[j]++;
    }
}
int judger(int x[],int y[],char ch)
{
    sum1=0,sum2=0;
	for(m=0;m<=2;m++)
    {
        if((x[m]==3||y[m]==3)&&ch=='K')
        {
            return 1;
        }
         if((x[m]==3||y[m]==3)&&ch=='B')
        {
            return 2;
        }
        if(x[m]==1)
        {
			sum1+=1;
    	}
		if(y[m]==1)
		{
			sum2+=1;
    	}
	}
    if(sum1==3&&sum2==3)
    {
        if(ch=='K')
        {
            return 1;
        }
        if(ch=='B')
        {
            return 2;
        }
    }
    return 0;
}
void printer(int ans1,int ans2)
{
    if(ans1==0&&ans2==0)
       {
           printf("No winner!");
       }
    else if(ans1==1)
       {
           printf("KiKi wins!");
       }
     else if(ans2==2)
       {
           printf("BoBo wins!");
       }
}

