#include <stdio.h>
void foo(int x, int *y)
{
    x=10;
    *y=20;
    printf("Foo function: x=%d\ty=%d\n",x,*y);
}
int main()
{
    int m=0, n=0;
    foo(m,&n);
    printf("Main function: m=%d\tn=%d\n",m,n);
    return 0;
}