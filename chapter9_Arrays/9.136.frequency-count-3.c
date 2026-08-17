/*
 * Program: Frequency Count 3
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

int main()  // Main function: execution starts here
{
    int a[10], n=10, i;

    for(i=0; i<n; i++)  // Iterate through array elements
    {
        if(i%3==0)
            a[i]=-rand()%5;  // Store a value in an array element
        else
            a[i]=rand()%5;  // Store a value in an array element
    }

    printf("The array is:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output

    printf("\n");  // Display output
    frequency(a, n);

    return 0;  // Indicate successful program termination
}
