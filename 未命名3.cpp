#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void cal(char s[],int n);
int main()
{
    char a1=0,a2=0;
    int n=0;
    char s[1200]={0};
    scanf("%c %c %d",&s[0],&s[1],&n);
    cal(s,n);
    printf("%s",s);
}
void cal(char s[],int n)
{
    int len=strlen(s);
    char tem[1000]={0};
    char kong[1000]={0};
    while(len<=n)
    {
        itoa((int)(s[len-2]-'0')*(s[len-3]-'0'),tem,10);
        strcat(s,tem);
        len=strlen(s);
        strcpy(tem,kong);
    }
    s[n]='\0';
}
