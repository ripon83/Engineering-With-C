/*******************************************************************
 * 
 * To print sin, cos and tan in radians
 * 
 * *****************************************************************/
#include <stdio.h>
#include <math.h> 
int main() 
{
    double n=45;
    printf("sin(%.2f) = %.4f\n", n, sin(n));
    printf("cos(%.2f) = %.4f\n", n, cos(n));
    printf("tan(%.2f) = %.4f\n", n, tan(n));
    return 0;
}