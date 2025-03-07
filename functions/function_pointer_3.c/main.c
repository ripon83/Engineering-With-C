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
    void (*fp[])(int, int)={add,sub,mult};
    fp[0](50,30);
    fp[1](50,30);
    fp[2](50,30);
    return 0;
}