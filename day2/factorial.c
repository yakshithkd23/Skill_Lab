
#include <stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("enter the number for factorisation\n");
    scanf("%d",&n);
    printf("factorial of %d is  %d",n,fact(n));
}
int fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1); // recursion call
}
