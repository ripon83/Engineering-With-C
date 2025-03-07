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
    int (*fp[])(int, int)={add,sub,mult};
    int x=fp[0](20,30);
    int y=fp[1](20,30);
    int z=fp[2](20,30);
    printf("The addition is:%d\n",x);
    printf("The subtraction is:%d\n",y);
    printf("The multiplication is:%d\n",z);
    return 0;
}