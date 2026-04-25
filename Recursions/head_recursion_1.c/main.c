#include <stdio.h>
void foo(int n)
{
    if(n>=1)
    {
        foo(n-1); //head recursion
        printf("%d\t",n);
    }
}
int main()
{
    foo(4);
    return 0;
}