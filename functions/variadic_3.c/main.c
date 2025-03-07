#include <stdio.h>
#include <stdarg.h>
int sum(int count, ...)
{
    int i,total,tmp;
    total = 0;
    va_list args;
    va_start(args, count);
    for(i=0; i<count; i++)
    {
        tmp = va_arg(args, int);
        total += tmp;
    }
    va_end(args);
    return total;
}
int main()
{
    printf("Sum: %d\n",sum(2,80,20));
    printf("Sum: %d\n",sum(10,1,2,3,4,5,6,7,8,9,10));
    printf("Sum: %d\n",sum(10,2,4,6,8,10,12,14,16,18,20));
    return 0;
}