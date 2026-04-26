#include <stdio.h>
struct demo 
{
    int x;
};
void foo()
{
    static struct demo d={0};
    d.x++;
    printf("%d\n", d.x);
}
int main()
{
    foo();
    foo();
    foo();
    foo();
    return 0;
}