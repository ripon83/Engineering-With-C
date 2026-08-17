/*
 * Program: Matrix With Function 6
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[]={10,12,3,14,5,6,7,0,9};   //Matrix in 1D format

    show(mat, 3, 3);                     //Displays the 3x3 matrix

    printf("\n");  // Display output
    maxRow(mat, 3, 3);                   //Maximum item of each row

    printf("\n");  // Display output
    maxCol(mat, 3, 3);                   //Maximum item of each column

    printf("\n");  // Display output
    minRow(mat, 3, 3);                   //Minimum item of each row

    printf("\n");  // Display output
    minCol(mat, 3, 3);                   //Minimum item of each column

    return 0;  // Indicate successful program termination
}
