#include <stdio.h>
long int log_int(int n)
{
    if(n<=1)
        return 0;
    return 1+log_int(n/2);
}
int main()
{
    int n=1024;
    printf("The log value in integer of %d is %ld",n,log_int(n));
    return 0;
}