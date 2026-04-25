#include <stdio.h>
#include <math.h>

int main()
{
    double n=-1.5;
    printf("The exp in \"float\" format is: %f\n",expf(n));
    printf("The exp in \"double\" format is: %lf\n",exp(n));
    printf("The exp in \"long double\" format is: %LF\n",expl(n));
    return 0;
}