#include <stdio.h>
#include <math.h>
void add(int m, int n)
{
    printf("The addition is: %d\n",m+n);
}
void sub(int m, int n)
{
    printf("The subtraction is: %d\n",m-n);
}
void multiply(int m, int n)
{
    printf("The multiplciation is: %d\n",m*n);
}
void power(int m,int n)
{
    printf("The power is: %0.0lf\n",pow(m,n));
}
void ops(int m, int n, void (*operation)(int,int))
{
    operation(m,n);
}
int main()
{
    int m=20, n=2;
    ops(m,n,add);
    ops(m,n,sub);
    ops(m,n,multiply);
    ops(m,n,power);
    return 0;
}