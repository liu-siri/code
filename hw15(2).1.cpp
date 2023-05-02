#include<stdio.h>

void delcharfun(char *str,char ch);
 
int main()
{
    char    ch,str[110];
    
    scanf("%s",str);    
    getchar();             
    scanf("%c",&ch);     
    delcharfun(str,ch);    
    printf("%s\n",str);    
    return 0;    
}



void delcharfun(char *str,char ch)
{
	int i,j;
	for( i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			for(j=i;str[j]!='\0';j++)
			{
				str[j]=str[j+1];
			}
			i--;
		}
	}
}



