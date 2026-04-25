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
    int i;
    int (*fp[])(int, int)={add,sub,mult};
    printf("Enter any value:");
    scanf("%d",&i);
    i=i%3;
    printf("The result is %d\n",fp[i](50,30));
    return 0;
}