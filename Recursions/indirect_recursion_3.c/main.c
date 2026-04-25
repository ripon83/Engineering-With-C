#include<stdio.h>  
int y(int);
int x(int n)
{
    if(n<=1)
        return 1;
    return n*y(n-1);
}
int y(int n)
{
    if (n==0)
        return 1;
    else
        return x(n);
}
int main()
{
    int n=5;
    int m=x(n);
    printf("Factorial of %d is %d",n,m);
}