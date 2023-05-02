#include<stdio.h>
int judger(int breath,int beat);
int main()
{
	int N=0,i=0,beat=0,breath=0;
	char s[10]={0};
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d",&s,&breath,&beat);
		if(judger(breath,beat))
		{
			printf("%s\n",s);
		}
	}
	return 0;
}
int judger(int breath,int beat)
{
	if(breath<15||breath>20||beat<50||beat>70)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
