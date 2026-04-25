#include <stdio.h>
//int w, int x, int y, int z are formal parameters
int largest(int w, int x, int y, int z)
{
    if(w>x&&w>y&&w>z)
        return w;
    else if(x>y&&x>z)
        return x;
    else if(y>z)
        return y;
    else
        return z;
}
int main()
{
    //in largest(1,2,3,4), 
    //1,2,3,4 are arguments or actual parameters.
    printf("The %d is the largest\n",largest(1,2,3,4));
    printf("The %d is the largest\n",largest(9,8,7,6));
    printf("The %d is the largest\n",largest(10,20,50,30));
    //largest(1,2,3,4) is the calling function
    return 0;
}