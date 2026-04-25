#include <stdio.h>
void swap(int m, int n)
{
    int tmp=m;
    m=n;
    n=tmp;
    printf("Inside: m=%d\tn=%d\n",m,n);
}
int main()
{
    int m=10, n=20;
    printf("Before: m=%d\tn=%d\n",m,n);
    swap(m,n);
    printf("After: m=%d\tn=%d\n",m,n);
    return 0;
}