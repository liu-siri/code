#include <stdio.h>

char *locatesubstr(char *str1,char *str2);
int main()
{
    char str1[505],str2[505];
    char *p;
    gets(str1);
    gets(str2);
    p=locatesubstr(str1,str2);
    
    if(p==NULL)    printf("NULL!\n");
    else    puts(p);
    
    return 0;
}
#include<string.h>
#include<stdlib.h>
char *locatesubstr(char *str1,char *str2)
{
    char* p=0;
    char*copy2=0;
    copy2=str2;
	while(*str1!='\0')
    {
        if(*str1==*str2)
        {
            p=str1;
			while(*str2==*str1)
            {
            	str2++,str1++;
			}
			if(*str2=='\0')
			{
				return p;
			}
			str1=p,str2=copy2;
        }
        str1++;
    }
    return NULL;
}

