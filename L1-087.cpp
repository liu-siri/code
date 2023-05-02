#include<stdio.h>
void change(int type,int deal,int game[][200],int N,int M);
int counter(int game[][200],int N,int M);
int main()
{
	int game[200][200]={0};
	int N=0,M=0,Q=0,i=0,type=0,deal=0;
	scanf("%d %d %d",&N,&M,&Q);
	for(i=0;i<Q;i++)
	{
		scanf("%d %d",&type,&deal);
		change(type,deal,game,N,M);
	}
	printf("%d",counter(game,N,M));
}
void change(int type,int deal,int game[][200],int N,int M)
{
	int i=0;
	if(type)
		for(i=1;i<=N;i++)
			game[i][deal]=1;
	else
		for(i=1;i<=M;i++)
			game[deal][i]=1;
}
int counter(int game[][200],int N,int M)
{
	int i=0,j=0,num=0;
	for(i=1;i<=N;i++)
		for(j=1;j<=M;j++)
			if(!game[i][j])num++;
	return num;
}
