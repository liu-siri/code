#include <stdio.h>

int main() {
    int a=1,n=0,i=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=1<<n;
    }
    printf("%d",a);
    return 0;
}
