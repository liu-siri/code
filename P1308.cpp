
#include<stdio.h>
#include<math.h>
void compare(char * target,char*passage);
int judger(char target,char passage);
int main()
{
	char target[40]={0};
	char passage[1000000]={0};
	gets(target);
	gets(passage);//����
	compare(target,passage);
	return 0;
}
void compare(char * target,char*passage)
{
	int word=0,i=0,j=0,counter=0,begin=0,copy=0;//״̬��
	while(passage[i]!='\0')//��ǰ�Ƿ�Ϊ�ո�
	{
		if(passage[i]==' ')
		{
			word=0;	
			i++;
		}
		else
		{
			word=1;
			copy=i;//�洢��ʼλ��
			j=0;
			while(judger(target[j],passage[i])&&target[j]!='\0'&&passage[i]!='\0')//judger�����ж��Ƿ����
			{
				j++;i++;
			}
			if(passage[i]==' ')//������ԭ��Ϊ�ո�
			{
				word=0;
			}
			if(target[j]=='\0'&&word==0)//Ҫ���ҵĶ������Ҳ��ǲ����ַ�
			{
				if(counter==0)
				{
					begin=copy;
				}
				counter++;
			}
			if(j==0)//û�ҵ�Ҳ�ܽ���
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
	if(target==passage||fabs(pas_int-tar_int)==fabs('A'-'a'))//����ֵ�Ƴ���Сд
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

