
#include<string.h> 
void counter(char *s);//���໥���ǵ�boy,girl�ĸ��� 
int main()
{
	char s[10000]={0};
	gets(s);
	counter(s);
	return 0;
}
void counter(char *s)
{
	int i=0,n=0,boy=0,girl=0;
	int len=strlen(s);//��strlen�󳤶� 
	printf("s=%s len=%d",s,len);
	for(i=0;i<=len-3;i++)//��������boy��ʼ�жϣ��������ж�bo�� ���ж�b�����ж�oy,o,��y 
	{
		if(s[i]=='b')
		{
			if(s[i+1]=='o')
			{
				if(s[i+2]=='y')
				{
					i+=2;boy++;
				}
				else
				{
					i++;boy++;
				}
			}
			else
			{
				boy++;
			}
		}
		else if(s[i]=='g')
		{
			if(s[i+1]=='i')
			{
				if(s[i+2]=='r')
				{
					if(s[i+3]=='l')
					{
						i+=3;girl++;
					}
					else
					{
						i+=2;girl++;
					}
				}
				else
				{
					i+=1;girl++;
				}
			}
			else
			{
				girl++;
			}
		}
		else if(s[i]=='o')
		{
			if(s[i+1]=='y')
			{
				i++;boy++;
			}
			else
			{
				boy++;
			}
		}
		else if(s[i]=='y')
		{
			boy++;
		}
		else if(s[i]=='i')
		{
			if(s[i+2]=='r')
			{
				if(s[i+3]=='l')
				{
					i+=2;girl++;
				}
				else
				{
					i+=1;girl++;
				}
			}
			else
			{
				girl++;
			}
		}
		else if(s[i]=='r')
		{
			if(s[i+3]=='l')
			{
				i+=1;girl++;
			}
			else
			{
				girl++;
			}
		}
		else if(s[i]=='l')
		{
			girl++;
		}
	}
	printf("%d\n%d",boy,girl);
}
