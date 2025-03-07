#include <stdio.h>
void swap(int *x, int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}
int main()
{
    int m=10, n=20;
    printf("Before: m=%d\tn=%d\n",m,n);
    swap(&m,&n); //calling function
    printf("After: m=%d\tn=%d\n",m,n);
    return 0;
}