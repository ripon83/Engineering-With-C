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
void ArmstrongSeries(int n)
{
    for(int i=1;i<=n;i++)
        if(Armstrong(i))
            printf("%d\t",i);
}
int main()
{
    ArmstrongSeries(10000);
    return 0;
}