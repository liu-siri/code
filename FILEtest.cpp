#include<stdio.h>
int main()
{
	FILE* p = fopen("input.txt","r");
	char ch = 0;
	while(ch = fgetc(p),ch != EOF)
	{
		printf("%c",ch);
	}
	fclose(p);
}
