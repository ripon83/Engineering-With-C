#include <stdio.h>
int main()
{
    int i=0,n=10;
    here:
        printf("%d\t",i);
    if(i<n)
        goto here;
    return 0;
}