#include <stdio.h>
void add(int m, int n)
{
    printf("The addition is: %d\n",m+n);
}
void sub(int m, int n)
{
    printf("The subtraction is: %d\n",m-n);
}
void mult(int m, int n)
{
    printf("The multiplication is: %d\n",m*n);
}
int main()
{
    void (*fp)(int, int)=add;
    (*fp)(20,10);
    fp=sub;
    (*fp)(20,10);
    fp=mult;
    (*fp)(20,10);
    return 0;
}