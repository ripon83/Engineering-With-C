#include <stdio.h>
#include <math.h>
int Armstrong(int n)
{
    int temp=n,digit=0,rem,sum=0;
    while(temp) 
    {
        temp=temp/10; 
        digit++;  
    }
    temp=n;
    while(temp)
    {
        rem=temp%10; 
        sum+=pow(rem,digit); 
        temp/=10;  
    }
    if(n==sum)
        return 1;
    return 0;
}
int main() 
{
    int m=153;
    if(Armstrong(m))
        printf("%d is an Armstrong number",m);
    else
        printf("%d is not an Armstrong number",m);
    return 0;
}