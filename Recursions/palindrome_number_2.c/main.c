#include <stdio.h>
int reverse(int n, int rev)
{
    if(n==0)
        return rev;
    return reverse(n/10, rev*10+n%10);
}
int isPal(int n)
{
    return n==reverse(n,0);
}
int main()
{
    int m=1221;
    if(isPal(m))
        printf("Plaindrome number");
    else
        printf("Not a palindrome");
}