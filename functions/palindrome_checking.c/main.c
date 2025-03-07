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
int main() 
{
    int m=171;
    if(palindrome(m))
        printf("%d is a palindrome number",m);
    else
        printf("%d is not a palindrome number",m);
    return 0;
}