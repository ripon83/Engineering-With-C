/*
 * Program: Matrix With Function 7
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[]={10,12,3,14,5,6,7,0,9};   //Initializes the 3x3 matrix

    show(mat, 3, 3);                     //Displays the 3x3 matrix

    printf("\n");  // Display output
    sumRow(mat, 3, 3);                   //Sums each row

    printf("\n");  // Display output
    sumCol(mat, 3, 3);                   //Sums each column

    return 0;  // Indicate successful program termination
}
