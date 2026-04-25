#include <stdio.h>
void foo(int n, ...)
{
    printf("%d\n",n);
}
int main()
{
    foo(1,2,3,4,5,6);
    foo(6,3,4,5);
    foo(5);
    return 0;
}