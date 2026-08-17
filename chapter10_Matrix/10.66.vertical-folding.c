/*
 * Program: Vertical Folding
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int matA[256], res[256];
    int r=5, c=5;                   //Rows and columns

    populate(matA, r, c, 5);        //Populates the matrix
    printf("The matrix A is:\n");  // Display output
    show(matA, r, c);               //Displays the populated matrix

    printf("\nAfter folding the matrix horizontally:\n");  // Display output
    foldHorizontal(matA, res, r, c);
    show(res, r, c);                //Displays the horizontally folded matrix

    printf("\nAfter folding the matrix vertically:\n");  // Display output
    foldVertical(matA, res, r, c);
    show(res, r, c);                //Displays the vertically folded matrix

    return 0;  // Indicate successful program termination
}
