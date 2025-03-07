#include <stdio.h>
#include <math.h>

int main()
{
    int n=1024;
    printf("The ln in \"float\" format is: %f\n",logf(n));
    printf("The ln in \"double\" format is: %lf\n",log(n));
    printf("The ln in \"long double\" format is: %LF\n",logl(n));
    return 0;
}