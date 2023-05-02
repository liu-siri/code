
#include<stdio.h>  
#include<stdlib.h>  
  
  /*
int main()  
{  
    int i,j;  
    //申请一个3行2列的整型数组  
    int (*a)[2]=(int(*)[2])malloc(sizeof(int)*3*2);  
    for(i=0;i<3;i++)  
    {
        for(j=0;j<2;j++)  
        {  

			printf("a[%d][%d]=%d\n",i,j,a[i][j]);  //输出数组每个元素地址，每个元素的地址是连续的
        }
    }
 
 
    free(a);
    return 0;  
}  */

#include <stdio.h>
 
int main()
{
    int **a = NULL;
    int Xlength, Ylength;
    scanf("%d%d", &Xlength, &Ylength);
    /*分配二维数组*/
    a = (int **)malloc(Xlength*sizeof(int *));
    for (int i = 0; i < Xlength; i++)
        a[i] = (int *)malloc(Ylength*sizeof(int));
    /*释放*/
    for (int i = 0; i < Xlength; i++)
        free(a[i]);
    free(a);
    printf("a[1][2]=%d",a[1][2]);
    return 0;
}

