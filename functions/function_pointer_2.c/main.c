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
    int (*fp)(int, int)=add;
    printf("The addition is: %d\n",(*fp)(m,n));
    fp=sub;
    printf("The subtraction is: %d\n",(*fp)(m,n));
    fp=mult;
    printf("The multiplication is: %d\n",(*fp)(m,n));
    return 0;
}