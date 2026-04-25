#include<stdio.h>  
int odd(int);
int even(int n)
{
    if(n==0)
        return 0;
    return odd(n-1);
}
int odd(int n)
{
    if(n<=-1)
        return -1;
    return even(n-1);
}
int main()
{
    int n=5;
    int m=even(n);
    if(m==0)
        printf("%d is an even number\n",n);
    else
        printf("%d is an odd number\n",n);
}