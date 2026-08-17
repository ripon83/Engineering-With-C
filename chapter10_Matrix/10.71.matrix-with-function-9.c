/*
 * Program: Matrix With Function 9
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()   // Main function: execution starts here
{
    int mat[]={1,2,3,4,5,
               6,7,8,9,10,
               11,12,13,14,15,
               16,17,18,19,20,
               21,22,23,24,25};

    printf("The matrix is:\n");  // Display output
    show(mat, 5, 5);

    printf("The spiral order of the matrix is:\n");  // Display output
    Spiral(mat, 5, 5);

    return 0;  // Indicate successful program termination
}
