#include <stdio.h>
#include <math.h>
int add(int m, int n)
{
    return m+n;
}
int sub(int m, int n)
{
    return m-n;
}
int multiply(int m, int n)
{
    return m*n;
}
int power(int m,int n)
{
    return pow(m,n);
}
int ops(int m, int n, int (*operation)(int,int))
{
    return operation(m,n);
}
int main()
{
    int m=20, n=2;
    printf("Addition:%d\n",ops(m,n,add));
    printf("Subtraction:%d\n",ops(m,n,sub));
    printf("Multiplication:%d\n",ops(m,n,multiply));
    printf("Power:%d\n",ops(m,n,power));
    return 0;
}