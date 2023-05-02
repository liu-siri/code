#include<stdio.h>


int BinarySearch(int a[],int n,int key) ; 

int main()
{
    int    num[200000] ; 
    int        n , m, i;    
    int        key ;
    
    scanf("%d%d",&n,&m); 
    for( i = 0 ; i < n ; i++ ) 
        scanf("%d",&num[i]) ;
        
    for( i = 0 ; i < m ; i++ ) 
    {
        scanf("%d",&key) ;
        printf("%d",BinarySearch(num,n,key)) ;
        if ( i != m - 1 ) printf(" ") ;
        else printf("\n") ;
    }
    return 0 ;
}




int BinarySearch(int a[],int n,int key) 
{
	 int left=0,right=n-1,mid=0;
	 if(a[n-1]==key)
	 {
	 	return n-1;
	 }
	 if(a[0]==key)
	 {
	 	return 0;
	 }
	 while(left<right-1)
	 {
	 	mid=(left+right)/2;
	 	if(a[mid]>key)
	 	{
	 		right=mid;
		 }
		 else if(a[mid]<key)
		 {
		 	left=mid;
		 }
		 else if(a[mid]==key)
		 {
		 	return mid;
		 }
	 }


		return -1;

		
}

