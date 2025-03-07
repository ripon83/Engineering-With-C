#include <stdio.h>
int foo()
{
    static int m=0;
    return m++;
}
int main()
{
    printf("%d\t",foo());
    printf("%d\t",foo());
    printf("%d\t",foo());
    printf("%d\t",foo());
    printf("%d\t",foo());
    printf("%d\t",foo());
    return 0;
}