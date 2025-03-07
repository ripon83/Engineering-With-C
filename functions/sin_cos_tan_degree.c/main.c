/*******************************************************************
 * 
 * To print sin, cos and tan in degree
 * 
 * *****************************************************************/

#include <stdio.h>
#include <math.h> 
double to_radians(double n) {
    return n * (M_PI / 180.0);
}

int main() 
{
    double n=45, rad;
    rad = to_radians(n);
    printf("sin(%.2f) = %.4f\n", n, sin(rad));
    printf("cos(%.2f) = %.4f\n", n, cos(rad));
    printf("tan(%.2f) = %.4f\n", n, tan(rad));
    return 0;
}