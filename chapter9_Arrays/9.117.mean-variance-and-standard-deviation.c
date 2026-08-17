/*
 * Program: Mean Variance And Standard Deviation
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void populate(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)  //O(n)
    {
        a[i]=rand()%100;  // Store a value in an array element
    }
}
double mean(int a[],int n)
{
    double m=0.0;
    int i;
    for(i=0; i<n; i++)  //O(n)
        m+=a[i];
    m=m/n;
    return m;
}
double variance(int a[], int n, double m)
{
    int i;
    double var=0.0;
    for(i=0; i<n; i++)  //O(n)
    {
        var+=(a[i]-m)*(a[i]-m);
    }
    var=var/n;
    return var;
}
double std(double var)
{
    return sqrt(var);
}
void show(int a[], int n)
{
    for(int i=0; i<n; i++)  //O(n)
        printf("%d\t", a[i]);  // Display output
    printf("\n");  // Display output
}
int main()  // Main function: execution starts here
{
    int a[1000], n=1000;
    populate(a, n);
    //show(a, n);
    double m=mean(a, n);
    double var=variance(a, n, m);
    double s=std(var);
    printf("The mean: %lf\n", m);  // Display output
    printf("The variance: %lf\n", var);  // Display output
    printf("The standard deviation: %lf\n", s);  // Display output
    return 0;  // Indicate successful program termination
}
