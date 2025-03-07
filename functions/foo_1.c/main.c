#include <stdio.h>
void foo2();
void foo1()
{
    foo2();
}
void foo2()
{
    printf("Foo2 function");
}
int main()
{
    foo1();
    return 0;
}