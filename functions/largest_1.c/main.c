#include <stdio.h>
void largest(int w, int x, int y, int z)
{
    if(w>x&&w>y&&w>z)
        printf("%d is the largest\n",w);
    else if(x>y&&x>z)
        printf("%d is the largest\n",x);
    else if(y>z)
        printf("%d is the largest\n",y);
    else
        printf("%d is the largest\n",z);
    
}
int main()
{
    largest(1,2,3,4);
    largest(9,8,7,6);
    largest(10,20,50,30);
    return 0;
}