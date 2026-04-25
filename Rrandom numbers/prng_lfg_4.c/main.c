#include <stdio.h>
unsigned int prng()
{
    unsigned int a[20]={2030826917,3082427726,3956945254,1860262496,74654617,2047028154, 4146139604};
    unsigned int b[20]={2388156329,2350795966,856776393,2635440412,2847918652,3332540064, 2269267216, 580978650,3159456094,96042424,121901380};
    static unsigned int seed=123456;
    int i=seed%7,j=seed%11;
    unsigned long int x=a[i],y=b[j];
    static unsigned long int z=0;
    z^=(x^y);
    seed^=z;
    return z;
}
int main()
{
    unsigned int n;
    for(int i=0;i<10;i++)
        printf("%u\t",prng());
}