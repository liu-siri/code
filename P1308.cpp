
#include<stdio.h>
#include<math.h>
void compare(char * target,char*passage);
int judger(char target,char passage);
int main()
{
	char target[40]={0};
	char passage[1000000]={0};
	gets(target);
	gets(passage);//读入
	compare(target,passage);
	return 0;
}
void compare(char * target,char*passage)
{
	int word=0,i=0,j=0,counter=0,begin=0,copy=0;//状态机
	while(passage[i]!='\0')//当前是否为空格
	{
		if(passage[i]==' ')
		{
			word=0;	
			i++;
		}
		else
		{
			word=1;
			copy=i;//存储起始位置
			j=0;
			while(judger(target[j],passage[i])&&target[j]!='\0'&&passage[i]!='\0')//judger函数判断是否相等
			{
				j++;i++;
			}
			if(passage[i]==' ')//出来后原文为空格
			{
				word=0;
			}
			if(target[j]=='\0'&&word==0)//要查找的读完了且不是部分字符
			{
				if(counter==0)
				{
					begin=copy;
				}
				counter++;
			}
			if(j==0)//没找到也能进行
			{
				i++;
			}
		}
	}
	if(counter==0)
	{
		printf("-1");
	}
	else
	{
		printf("%d %d",counter,begin);
	}
}
int judger(char target,char passage)
{
	int pas_int=passage-'0',tar_int=target-'0';
	if(target==passage||fabs(pas_int-tar_int)==fabs('A'-'a'))//绝对值破除大小写
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

