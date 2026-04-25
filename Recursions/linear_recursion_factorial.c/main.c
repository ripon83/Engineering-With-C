#include <stdio.h>
long int fact(int n)
{
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n=5;
    printf("factorial of %d is %ld",n,fact(n));
    return 0;
}