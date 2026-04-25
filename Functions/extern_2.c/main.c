#include <stdio.h>
void foo1()
{
    //declaration of the function
    extern void foo2();
    foo2();
    printf("\nFoo1 function");
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