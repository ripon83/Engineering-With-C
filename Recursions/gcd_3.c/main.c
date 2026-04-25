#include <stdio.h>
int gcd(int m, int n)
{
    if(m==n)
        return m;
    if(m>n)
        return gcd(m-n,n);
    return gcd(m, n-m);
}
int main()
{
    printf("%d",gcd(15,3));
    return 0;
}