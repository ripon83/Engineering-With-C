#include <stdio.h>
int main()
{
    int n=10000,i,temp,rev,rem;
    temp=n;
    for(i=0;i<n;i++)
    {
        temp=i;
        rev=0;   //resetting the rev
        while(temp)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        temp=i;
        if(i==rev)
            printf("%d,\t",i);
    }
    return 0;
}