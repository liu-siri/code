#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void dele(char s[]);
void lowwer(char s[]);
void shorten(char s[],int i,int len);
void change(char s[]);
int main()
{
	int N=0,i=0;
	char s[10000]={0};
	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++)
	{
		gets(s);
        printf("%s\n",s);
		dele(s);
		lowwer(s);
		change(s);	
		printf("AI:%s\n",s);
	}

	return 0;
}
void dele(char s[])
{
	int i=0,len=strlen(s),str=0,num=0,j=0,copy=0,flag=0;
	while(s[i]!='\0')
	{
		flag=0,num=0;
		while(s[0]==' ')
		{
			len=strlen(s);
			shorten(s,0,len);
		}
		if(!((s[i]<='9'&&s[i]>='0')||(s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')||s[i]==' '))
		{
			flag=1;i++;
		}
		while(flag==1&&s[i]==' ')
		{
			i++;
		}
		while(!((s[i]<='9'&&s[i]>='0')||(s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')||s[i]==' ')&&s[i-1]==' ')
		{
			len=strlen(s);
			shorten(s,i-1,len);
			i--;
		}
		while(s[i]==' '&&s[i+1]==' ')//(((s[i-1]<='9'&&s[i-1]>='0')||(s[i-1]<='z'&&s[i-1]>='a')||(s[i-1]<='Z'&&s[i-1]>='A')||s[i-1]==' '))
		{
			len=strlen(s);
			shorten(s,i,len);
		}
		i++;
	}
	copy=i;
	i--;num=0;
	while(num<1)//num表示末尾的非空格字符数量
	{
		if(s[i]!=' '&&num==0)
		{
			str=i,num++;
		}//str:尾的first空格字符
		i--;
	}
	if(copy-str!=1)
	{
		for(j=0;j<copy-str-1;j++)
		{
			len=strlen(s);
			shorten(s,str+1,len);
		}
	}
}
void lowwer(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]<='Z'&&s[i]>='A'&&s[i]!='I')
		{
			s[i]='a'+s[i]-'A';
		}
		i++;
	}
}
void change(char s[])
{
	int i=0,j=0,k=0,len=strlen(s),m=0;
	char *p=0;
	char ori[20][20]={{"can you"},{"could you"},{"I"},{"me"},{"?"}};
	char now[20][20]={{"I can"},{"I could"},{"you"},{"you"},{"!"}};
	char tem[1000]={0};
	char* strange[100]={0};
	for(j=len;j>=0;j--)
	{
		s[j+1]=s[j];
	}
	s[0]=' ';
	for(j=0;j<=4;j++)
	{
		p=strstr(s,ori[j]);
		while(p)
		{
			if(j==0)
			{
				if((*(p-1)==' '||!((*(p-1)<='9'&&*(p-1)>='0')||(*(p-1)<='z'&&*(p-1)>='a')||(*(p-1)<='Z'&&*(p-1)>='A')||*(p-1)==' '))&&(*(p+7)==' '||!((*(p+7)<='9'&&*(p+7)>='0')||(*(p+7)<='z'&&*(p+7)>='a')||(*(p+7)<='Z'&&*(p+7)>='A')||*(p+7)==' ')))
				{
					strcpy(tem,p+7);
					strcpy(p,now[j]);
					strcpy(p+5,tem);
				}
				else
				{
					strange[k]=p;k++;
				}
			}
			else if(j==1)
			{
				if((*(p-1)==' '||!((*(p-1)<='9'&&*(p-1)>='0')||(*(p-1)<='z'&&*(p-1)>='a')||(*(p-1)<='Z'&&*(p-1)>='A')||*(p-1)==' '))&&(*(p+9)==' '||!((*(p+9)<='9'&&*(p+9)>='0')||(*(p+9)<='z'&&*(p+9)>='a')||(*(p+9)<='Z'&&*(p+9)>='A')||*(p+9)==' ')))
				{
					strcpy(tem,p+9);
					strcpy(p,now[j]);
					strcpy(p+7,tem);
				}
				else
				{
					strange[k]=p;k++;
				}
			}
			else if(j==2)
			{
				if(*(p+2)!='c'&&((*(p-1)==' '||!((*(p-1)<='9'&&*(p-1)>='0')||(*(p-1)<='z'&&*(p-1)>='a')||(*(p-1)<='Z'&&*(p-1)>='A')||*(p-1)==' '))&&(*(p+1)==' '||!((*(p+1)<='9'&&*(p+1)>='0')||(*(p+1)<='z'&&*(p+1)>='a')||(*(p+1)<='Z'&&*(p+1)>='A')||*(p+1)==' '))))
				{
					strcpy(tem,p+1);
					strcpy(p,now[j]);
					strcpy(p+3,tem);
				}
				else
				{
					strange[k]=p;k++;
				}
			}
			else if(j==3)
			{
				if((*(p-1)==' '||!((*(p-1)<='9'&&*(p-1)>='0')||(*(p-1)<='z'&&*(p-1)>='a')||(*(p-1)<='Z'&&*(p-1)>='A')||*(p-1)==' '))&&(*(p+2)==' '||!((*(p+2)<='9'&&*(p+2)>='0')||(*(p+2)<='z'&&*(p+2)>='a')||(*(p+2)<='Z'&&*(p+2)>='A')||*(p+2)==' ')))
				{
					strcpy(tem,p+2);
					strcpy(p,now[j]);
					strcpy(p+3,tem);
				}
				else
				{strange[k]=p;k++;}
			}
			else if(j==4)
			{
				strcpy(tem,p+1);
				strcpy(p,now[j]);
				strcpy(p+1,tem);
			}
			p=strstr(s,ori[j]);
			for(m=0;m<k;m++)
			{
				if(strange[m]==p)
				{
					p=strstr(p+1,ori[j]);
				}
			}
		}
	}
}
void shorten(char s[],int i,int len)
{
	int j=i;
	for(j=i;j<len;j++)
	{
		s[j]=s[j+1];
	}
}
