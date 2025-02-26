#include <stdio.h>
int main()
{
    long int a=0, b=1, c,n=92; // The first two fibonacci numbers are 0 and 1.
    int i;
    if(n==0||n==1)
        printf("%ld",a);
    for(i=2; i<=n; i++)
    {
         c=a+b;             //Addition of two previous Fibonacci numbers
         a=b;               //Update the previous Fibonacci a number
         b=c;               //Update the previous Fibonacci number b                              
         //printf("%ld\t",b); //To display the Fibonacci series
    }
    printf("%ldth fibonacci number is %ld\n",n,b);
    return 0;
}