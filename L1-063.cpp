#include<stdio.h>
int judger(int sex,int num,int type);
int main()
{
	char wei[3][30]={{"duo chi rou!"},{"wan mei!"},{"shao chi rou!"}};//wei[0]thin,wei[1]perfect,wei[2]fat,hei the same
	char hei[3][30]={{"duo chi yu!"},{"wan mei!"},{"ni li hai!"}};
	int N=0,sex=0,height=0,weight=0,i=0,ans1=0,ans2=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d %d %d",&sex,&height,&weight);
		ans1=judger(sex,height,1);//1:height 0:height  return :thin:0 perfect:1 fat:2
		ans2=judger(sex,weight,0);
		printf("%s %s\n",hei[ans1],wei[ans2]);
	}
	return 0;
}
int judger(int sex,int num,int type)
{
		if(sex==1&&type==1)
		{
			if(num<130)return 0;
			else if(num==130)return 1;
			else if(num>130)return 2;
		}
		else if(sex==0&&type ==1)
		{
			if(num<129)return 0;
			else if(num==129)return 1;
			else if(num>129)return 2;
		}
		else if(sex==1&&type==0)
		{
			if(num<27)return 0;
			else if(num==27)return 1;
			else if(num>27)return 2;
		}
		else if(sex==0&&type==0)
		{
			if(num<25)return 0;
			else if(num==25)return 1;
			else if(num>25)return 2;
		}
}
