#include <stdio.h>
#include <math.h>

int count(int n)
{
    if(n==0)
        return 0;
    return 1+count(n/10);
}

int powerSum(int n, int digits) 
{
    if (n==0) 
        return 0;
   return pow(n%10, digits) + powerSum(n/10, digits);
}

int isArmstrong(int n) 
{
    int digits=count(n); 
    return (n == powerSum(n, digits)); 
}

int main() 
{
    int n=153;
    if (isArmstrong(n))
        printf("The number %d is an Armstrong number\n",n);
    else
        printf("The number %d is not an Armstrong number\n",n);
    return 0;
}