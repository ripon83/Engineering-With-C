#include <stdio.h>
int main()
{
    int x,y;
    static int z;
    unsigned long int xx=(unsigned long int)&x;
    unsigned long int yy=(unsigned long int)&y;
    unsigned long int zz=(unsigned long int)&z;
    printf("Address of x: %lu\n",xx);
    printf("Address of y: %lu\n",yy);
    printf("Address of z: %lu\n",zz);
    return 0;
}