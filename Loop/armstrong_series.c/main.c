#include <stdio.h>
#include <math.h>
int main()
{
    int n=10000,i,temp,digit,sum,rem;
    for(i=0;i<=n;i++)
    {
        temp=i;
        sum=0;
        digit=0;
        while(temp)
        {
            temp=temp/10;
            digit++;
        }
        temp=i;
        while(temp)
        {
            rem=temp%10;
            sum+=pow(rem,digit);
            temp/=10;
        }
        if(i==sum)
            printf("%d,\t",i);
    }
    return 0;
}