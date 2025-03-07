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
    int i;
    void (*fp[])(int, int)={add,sub,mult};
    printf("Enter any value:");
    scanf("%d",&i);
    i=i%3;
    fp[i](50,30);
    return 0;
}