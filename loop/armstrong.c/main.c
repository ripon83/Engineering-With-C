#include <stdio.h>
#include <math.h>
int main()
{
    int n=153,temp,digit=0,sum=0,rem;
    temp=n;
    while(temp)  //Counting the number of digits present in n
    {
        temp=temp/10; // Integer division of temp by 10.
        digit++;   // Counts the digit present in the number n.
    }
    temp=n;
    while(temp)  //Summation of the power of digit of the number n.
    {
        rem=temp%10;   //remainder
        sum+=pow(rem,digit); // sum of the power of the digit
        temp/=10;  // integer division of temp by 10.
    }
    if(n==sum)
        printf("%d is a Armstrong number\t",n);
    else
        printf("%d is not a Armstrong number\t",n);
    return 0;
}