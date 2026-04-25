#include <stdio.h>
#include <math.h>
int palindrome(int n)                    
{
    int tmp=n,r,rev=0;
    while(tmp)
    {
        r=tmp%10;
        rev=rev*10+r;
        tmp=tmp/10;
    }
    if(rev==n)
        return 1;
    return 0;
}
void palindromeSeries(int n)
{
    for(int i=1;i<n;i++)
    {
        if(palindrome(i))
            printf("%d\t",i);
    }
}
int main() 
{
    int m=1000;
    palindromeSeries(m);
    return 0;
}