#include <stdio.h>
void foo2()
{
    printf("Foo2 function");
}
void foo1()
{
    foo2();
}
int main()
{
    foo1();
    return 0;
}