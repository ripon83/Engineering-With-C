#include <stdio.h>
//int w, int x, int y, int z are formal parameters
int smallest(int w, int x, int y, int z)
{
    if(w<x&&w<y&&w<z)
        return w;
    else if(x<y&&x<z)
        return x;
    else if(y<z)
        return y;
    else
        return z;
}
int main()
{
    //in smallest(1,2,3,4), 
    //1,2,3,4 are arguments or actual parameters.
    printf("The %d is the smallest\n",smallest(1,2,3,4));
    printf("The %d is the smallest\n",smallest(9,8,7,6));
    printf("The %d is the smallest\n",smallest(10,20,50,30));
    //smallest(1,2,3,4) is the calling function
    return 0;
}