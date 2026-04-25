#include <stdio.h>
int reverse(int n)
{
    static int rev=0;
    if(n==0)
        return rev;
    else
    {
            rev=rev*10+n%10;
            reverse(n/10);
    }
}
int isPal(int n)
{
    return n==reverse(n);
}
int main()
{
    int m=1221;
    if(isPal(m))
        printf("Plaindrome number");
    else
        printf("Not a palindrome");
}