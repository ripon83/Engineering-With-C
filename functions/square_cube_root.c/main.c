#include <stdio.h>
#include <math.h>

int main()
{
    double m=9.0,n=27.0;
    //square root
    printf("The exp in \"float\" format is: %f\n",sqrtf(m));
    printf("The exp in \"double\" format is: %lf\n",sqrt(m));
    printf("The exp in \"long double\" format is: %LF\n",sqrtl(m));
    
    //cube root
    printf("\nThe cbrt in \"float\" format is: %f\n",cbrtf(n));
    printf("The cbrt in \"double\" format is: %lf\n",cbrt(n));
    printf("The cbrt in \"long double\" format is: %LF\n",cbrtl(n));
    return 0;
}