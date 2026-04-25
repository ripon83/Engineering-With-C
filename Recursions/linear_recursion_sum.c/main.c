#include <stdio.h>
long int sum(int n)
{
    if(n==0||n==1)
        return n;
    return n+sum(n-1);
}
int main()
{
    int n=5;
    printf("The summation upto %d is %ld",n,sum(n));
    return 0;
}