#include <stdio.h>
int polynomial(int x, int a, int b, int c)
{
    //ax^2+bx+c
    return a*x*x+b*x+c;
}
int main()
{
    printf("%d\n",polynomial(2,1,3,2));
    printf("%d\n",polynomial(5,1,2,3));
    printf("%d\n",polynomial(4,4,3,2));
    return 0;
}