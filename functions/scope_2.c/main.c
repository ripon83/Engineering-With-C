#include <stdio.h>
int m=10; //global variable
void foo()
{
    int m=20; //auto or local variable
    printf("Inside foo: %d\n",m);
}
int main()
{
    foo();
    {
        static int m=30; //auto or local variable
        printf("Inside anonymous block: %d\n",m);
    }
    printf("Inside main block: %d\n",m);
    return 0;
}