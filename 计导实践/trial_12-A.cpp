#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char s[1000][120]={0};
int main()
{
	char * replacer = "!@#$%^&*";
	char * key = "mdzz" ;
	char * s0 = "nmdzz,j";
	char  s1[20] = {0};
	char  tem[20] = {0};
	char * p = 0;
	/*strcpy(s1,s0);
	while(p=strstr(s1,key),p)
	{
		strcat(tem,p+strlen(key));
		*(p)='\0';
		strcat(s1,replacer);
		strcat(s1,tem);
	}
	printf("%s",s1);
	//printf("%s",replacer);*/
	strcpy(s1,s0);
	strcpy(tem,replacer);
	printf("%s%s",s1,tem);
	return 0;
}
