#include<stdio.h>
char* my_strcpy(char *str1,char *str2);
int main()
{
	char arr1[30]="abcdef";
	char arr2[]="asd";
	my_strcpy(arr1,arr2);
	printf("%s",arr1);
	return 0;
}
char* my_strcpy(char *str1,char *str2)
{
	char* des=str1;
	printf("%p %p\n",str1,str2);
	while(*str1++=*str2++)printf("%p %p\n",str1,str2);
	return des;
}
