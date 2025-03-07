#include <stdio.h>
void foo(int *x, int *y)
{
    *y=100;
    x=y;
}
int main()
{
    int m=10,n=20;
    printf("m=%d\tn=%d\n",m,n);
    foo(&m,&n);
    printf("m=%d\tn=%d\n",m,n);
    return 0;
}