#include <stdio.h>
#include <stdarg.h>
void foo(int count,...)
{
    va_list args;
    va_start(args,count);
    for(int i=0;i<count;i++)
        printf("%d\t",va_arg(args,int));
    printf("\n");
    va_end(args);
}
int main()
{
    foo(6,1,2,3,4,5,6);
    foo(4,6,3,4,5);
    foo(2,1,2,3);
    return 0;
}