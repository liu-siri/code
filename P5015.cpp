#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s[1000]={0};
    
    int i=0,counter=0,blanks=0,ent=0,ch=0;
    while(scanf("%s",&s[i])!=EOF)
    {
	    while(s[i]!='\0')
	    {
	        counter++;
	        i++;
	    }
	    /*gets(&s[i]);
	    if(s[i]=='\0')
	    {
	    	
		}
		counter++;*/
		
	}
	printf("%d",counter);
	return 0;
}
