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
void ops(int m, int n, int (*operation)(int,int))
{
    printf("The result is: %d\n",operation(m,n));
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