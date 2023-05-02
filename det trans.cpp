#include <stdio.h>
int main()
{
    int n=0,m=0,i=0,j=0,k=0,k0=0,tem=0,trans1=0,trans2=0;
    char ch=0;
    int det[10][10]={0};
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&det[i][j]);
        }
    }
    scanf("%d",&k);
    for(k0=0;k0<k;k0++)
    {
        getchar();
		scanf("%c",&ch);
        if(ch=='r')
        {
            scanf("%d %d",&trans1,&trans2);
            for(j=1;j<=m;j++)
            {
                tem=det[trans1][j];
                det[trans1][j]=det[trans2][j];
                det[trans2][j]=tem;
            }
        }
        else
        {
             scanf("%d %d",&trans1,&trans2);
            for(i=1;i<=n;i++)
            {
                tem=det[i][trans1];
                det[i][trans1]=det[i][trans2];
                det[i][trans2]=tem;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",det[i][j]);
        }
        printf("\n");
    }
    return 0;
}
