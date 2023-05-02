#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[1000]={0};
	gets(s);
	printf("Hello %s",s);
	return 0;
}
