#include <stdio.h>

int sum(int n, int divisor)
{
    if(divisor==1)
        return 1;
    if(n%divisor==0)
        return divisor+sum(n,divisor-1);
    return sum(n,divisor-1);
}

int isPerfect(int n)
{
    if(n<=1)
        return 0;
    return n==sum(n,n/2);
}


int main() 
{
    int n=28;
    if(isPerfect(n))
        printf("The number %d is a perfect number\n",n);
    else
        printf("The number %d is not a perfect number\n",n);
    return 0;
}