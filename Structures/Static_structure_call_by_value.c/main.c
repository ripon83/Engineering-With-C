#include <stdio.h>
typedef struct
{
    int x;
}demo;

int foo(demo p)    //Call by value
{
    return p.x++;  //No modification in the original location
}

int main()
{
    static demo d={0};
    printf("%d\t%d\t%d\t%d\n", foo(d), foo(d), foo(d), foo(d));
    return 0;
}