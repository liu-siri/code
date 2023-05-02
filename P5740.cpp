#include<stdio.h>
typedef struct stu
{
	char name[10000][10];
	int sum[10000];
	int score[10000][3];
}stu;
int main()
{
	stu s={0};
	int i=0,N=0,max=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",&s.name[i]);
		scanf("%d %d %d",&s.score[i][0],&s.score[i][1],&s.score[i][2]);
	}
	max=0;
	for(i=0;i<N;i++)
	{
		s.sum[i]=s.score[i][0]+s.score[i][1]+s.score[i][2];
		if(s.sum[max]<s.sum[i])
		{
			max=i;
		}
	}
	printf("%s %d %d %d %d",s.name[max],s.sum[max],s.score[max][0],s.score[max][1],s.score[max][2]);
	return 0;
}
