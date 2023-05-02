
#include<stdio.h>

int        code( char s[] ) ;

int main()
{
    int        T;
    char    s[64] ;

    scanf( "%d" , &T );      
    while( T-- )
    {
        scanf("%s",s);
        printf( "%d\n" , code(s) ) ;
    }
    
    return 0;
} 


int   code( char s[] )
{
    int ans[1000]={0};
    ans[0]=100000;
    int j=1,i=0,cp=0;
    while(s[i]!='\0')
    {
        if((s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')&&ans[j-1]!=1)
		{
			ans[j]=1;j++;
		}
		else if((s[i]=='C'||s[i]=='G'|| s[i]=='J' ||s[i]=='K'||s[i]== 'Q'||s[i]=='S'||s[i] =='X'||s[i]=='Z')&&ans[j-1]!=2)
		{
			ans[j]=2;j++;
		}
		else if((s[i]=='D'||s[i]=='T')&&ans[j-1]!=3)
		{
			ans[j]=3;j++;
		}
		else if(s[i]=='L'&&ans[j-1]!=4)
		{
			ans[j]=4;j++;
		}
		else if((s[i]=='M' ||s[i]=='N' )&&ans[j-1]!=5)
		{
			ans[j]=5;j++;
		}
		else if(s[i]=='R'&&ans[j-1]!=6)
		{
			ans[j]=6;j++;
		}
		else
		{
			ans[j]=100;j++;
		}
        i++;
    }
    cp=j;
	for(i=1;i<j;i++)
	{
		if(ans[i]!=100)
		{
			printf("%d",ans[i]);
		}
		else
		{
			cp--;
		}
	}
	printf("\n");
	return cp-1;
}




  /* #include<string.h>
   int   code( char s[] )
   {
       int ans[100]={0};
       ans[0]=100;
       int len=strlen(s);
       int j=1,i=0,cp=0;
       for( i=0;i<=len-1;i++)
       {
   		if((s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')&&ans[j-1]!=1)
   		{
   			ans[j]=1;j++;
   		}
   		else if((s[i]=='C'||s[i]=='G'|| s[i]=='J' ||s[i]=='K'||s[i]== 'Q'||s[i]=='S'||s[i] =='X'||s[i]=='Z')&&ans[j-1]!=2)
   		{
   			ans[j]=2;j++;
   		}
   		else if((s[i]=='D'||s[i]=='T')&&ans[j-1]!=3)
   		{
   			ans[j]=3;j++;
   		}
   		else if(s[i]=='L'&&ans[j-1]!=4)
   		{
   			ans[j]=4;j++;
   		}
   		else if((s[i]=='M' ||s[i]=='N' )&&ans[j-1]!=5)
   		{
   			ans[j]=5;j++;
   		}
   		else if(s[i]=='R'&&ans[j-1]!=6)
   		{
   			ans[j]=6;j++;
   		}
   		else
   		{
   			ans[j]=100;j++;
   		}
   	}
   	for(i=1,cp=j;i<j;i++)
   	{
   		if(ans[i]!=100)
   		{
   			printf("%d",ans[i]);
   		}
   		else
   		{
   			cp--;
   		}
   	}
   	printf("\n");
   	return cp-1;
   }*/
