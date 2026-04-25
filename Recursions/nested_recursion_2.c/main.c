#include <stdio.h>
int foo(int n)
{
    if(n>=5)
        return n;
    return foo(foo(n+1)+1)+1;
}
int main()
{
    int n=1;
    printf("%d",foo(n));
    return 0;
}