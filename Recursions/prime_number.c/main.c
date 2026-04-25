#include <stdio.h>
#include <math.h>
int isPrime(int n, int divisor)
{
    if(n<=1)
        return 0;
    if(divisor==1)
        return 1;
    if(n%divisor==0)
        return 0;
    return isPrime(n,divisor-1);
}
int testPrime(int n)
{
    return isPrime(n,sqrt(n));
}
int main()
{
    int n=29;
    if(testPrime(n))
        printf("The number %d is a prime number",n);
    else
        printf("The number %d is not a prime number",n);
    return 0;
}