#include<stdio.h>
int main()
{
char ch=0;
scanf("%c",&ch);
getchar();
while('ch'!='\n')
{
    if('ch'>='a'&&'ch'<='w')
        ch=ch+3;
    if('ch'>='A'&&'ch'<='W')
        ch=ch+3;
   
    printf("%c",ch);
    scanf("%c",&ch);
}
return 0;
}

