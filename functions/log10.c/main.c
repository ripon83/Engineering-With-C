#include <stdio.h>
#include <math.h>

int main()
{
    int n=1024;
    printf("The ln in \"float\" format is: %f\n",log10f(n));
    printf("The ln in \"double\" format is: %lf\n",log10(n));
    printf("The ln in \"long double\" format is: %LF\n",log10l(n));
    return 0;
}