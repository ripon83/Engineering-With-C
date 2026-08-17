/*
 * Program: Float Point Number To Binary 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
void convert(double m, int *n, int bin[])
{
    int dec, d, i=0, k=*n;
    double frac;
    dec=m;
    frac=m-dec;
    while(i<k)  // Repeat while the condition remains true
    {
        frac=frac*2;
        d=frac;
        bin[i]=d;  // Store a value in an array element
        frac=frac-d;
        i++;
        if(frac==0)
            break;
    }
    *n=i;
}
void print(int bin[],int n)
{
    printf("0.");  // Display output
    for(int i=0; i<n; i++)  // Iterate through array elements
        printf("%d", bin[i]);  // Display output
}
int main()  // Main function: execution starts here
{
    double m=0.233;;
    int bin[1024], n=100;
    convert(m, &n, bin);
    print(bin, n);
    return 0;  // Indicate successful program termination
}
