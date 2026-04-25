#include <stdio.h>
int add(int m, int n)
{
    return m+n;
}
int sub(int m, int n)
{
    return m-n;
}
int mult(int m, int n)
{
    return m*n;
}
int main()
{
    int m=20,n=10;
    int (*fp[])(int, int)={add,sub,mult};
    printf("The addition is: %d\n",(*fp[0])(m,n));
    printf("The subtraction is: %d\n",(*fp[1])(m,n));
    printf("The multiplication is: %d\n",(*fp[2])(m,n));
    return 0;
}
