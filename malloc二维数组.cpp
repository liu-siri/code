
#include<stdio.h>  
#include<stdlib.h>  
  
  /*
int main()  
{  
    int i,j;  
    //����һ��3��2�е���������  
    int (*a)[2]=(int(*)[2])malloc(sizeof(int)*3*2);  
    for(i=0;i<3;i++)  
    {
        for(j=0;j<2;j++)  
        {  

			printf("a[%d][%d]=%d\n",i,j,a[i][j]);  //�������ÿ��Ԫ�ص�ַ��ÿ��Ԫ�صĵ�ַ��������
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
    /*�����ά����*/
    a = (int **)malloc(Xlength*sizeof(int *));
    for (int i = 0; i < Xlength; i++)
        a[i] = (int *)malloc(Ylength*sizeof(int));
    /*�ͷ�*/
    for (int i = 0; i < Xlength; i++)
        free(a[i]);
    free(a);
    printf("a[1][2]=%d",a[1][2]);
    return 0;
}

