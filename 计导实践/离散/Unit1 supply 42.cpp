#include<stdio.h>
#include<math.h>
int main()
{
	int num = 0,i = 0, j = 0;
	int flag = 0,times = 0;//flag是任务终止标识符
	int labi[3] = {0};//存储符合条件的平方数
	int labj[3] = {0};
	for(num=1;num<=10000;num++)
	{
		times = 0,flag = 0;//出现次数，判断完一个数后归零
		labi[0] = 0 ,labi[1] = 0;
		labj[0] = 0 ,labj[1] = 0;
		for(i=1;i<=sqrt(num)&&!flag;i++)
		{
			for(j=1;j<=sqrt(num)&&j<=sqrt(num-i*i)&&!flag;j++)
			{
				if(num==i*i+j*j)
				{
					if(j!=labi[0]&&i!=labj[0])
					{
						labi[times]= i ,labj[times] = j;
						times++;
						//printf("now times=%d num=%d\n",times,num);
					}
					if(times == 2)
					{
						printf("yes\n");
						printf("way1:%d = %d^2+%d^2\n",num,labi[0],labj[0]);
						printf("way2:%d = %d^2+%d^2\n",num,labi[1],labj[1]);
						flag = 1;
					}
				}
			}
		}
	
	} 
	return 0;
}
