#include <stdio.h>

int main() 
{
    int year=0,month=0,date=0;
    scanf("%4d",&year);
    scanf("%2d",&month);
    scanf("%2d",&date);
    printf("%04d\n",year);
    printf("%02d\n",month);
    printf("%02d\n",date);
    return 0;
}
