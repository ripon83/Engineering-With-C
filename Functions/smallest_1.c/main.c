#include <stdio.h>
void smallest(int w, int x, int y, int z)
{
    if(w<x&&w<y&&w<z)
        printf("%d is the smallest\n",w);
    else if(x<y&&x<z)
        printf("%d is the smallest\n",x);
    else if(y<z)
        printf("%d is the smallest\n",y);
    else
        printf("%d is the smallest\n",z);
}
int main()
{
    smallest(1,2,3,4);
    smallest(9,8,7,6);
    smallest(10,20,50,30);
    return 0;
}