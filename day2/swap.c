
#include <stdio.h>
void swap(int *a,int *b);
void main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Before swapping : %d \t %d\n ",a,b);
    swap(&a,&b);
    printf("after swapping  : %d \t %d",a,b);
    
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
