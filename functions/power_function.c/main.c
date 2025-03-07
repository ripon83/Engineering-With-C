#include <stdio.h>
#include <math.h>
double my_pow(double x, double y) 
{
    return exp(y * log(x)); 
}
int main()
{
	printf("%lf",my_pow(2,2.5));
	return 0;
}