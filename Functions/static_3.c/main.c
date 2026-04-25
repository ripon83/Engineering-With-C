#include <stdio.h>
int foo()
{
    static int m=0;
    return m++;
}
int main()
{
    printf("%d\t%d\t%d\t%d\n",foo(),foo(),foo(),foo());
    printf("%d\t%d\t%d\t%d\n",foo(),foo(),foo(),foo());
    printf("%d\t%d\t%d\t%d\n",foo(),foo(),foo(),foo());
    return 0;
}