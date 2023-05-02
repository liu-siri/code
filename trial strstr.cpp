#include<stdio.h>
#include<string.h>
int main()
{
	char s[20]="abcbbb";
	char s2[20]="e";
	char* p=0;
	printf("%d",strstr(s,s2));
	return 0;
}
