#include <stdio.h>
void foo(int m, int n)
{
    printf("Swap function: m=%p\tn=%p\n",&m,&n);
}
int main()
{
    int m=10, n=20;
    foo(m,n);
    printf("Main function: m=%p\tn=%p\n",&m,&n);
    return 0;
}