#include <stdio.h>
#include <math.h>
int main()
{
    double m=3.12345;
    printf("The modulus is: %lf\n",fmod(m,10));
    printf("The modulus is: %lf\n",fmod(m,1));
    printf("The modulus is: %lf\n",fmod(m,3));
    printf("The modulus is: %lf\n",fmod(m,3.12345));
    printf("The modulus is: %lf\n",fmod(m,0.12345));
    return 0;
}