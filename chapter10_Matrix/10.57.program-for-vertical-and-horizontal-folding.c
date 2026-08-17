/*
 * Program: Program For Vertical And Horizontal Folding
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int r=5, c=5, mat[10][10], res1[10][10], res2[10][10];

    populate(r, c, mat, 10);       //Populates mat[][] randomly

    printf("\nThe matrix A is:\n");  // Display output
    show(r, c, mat);               //Displays mat[][]

    foldVertical(r, c, mat, res1); //Folds the matrix vertically
    printf("\nThe resultant matrix after folding vertically is:\n");  // Display output
    show(r, c, res1);              //Displays res1[][]

    foldHorizontal(r, c, mat, res2); //Folds the matrix horizontally
    printf("\nThe resultant matrix after folding horizontally is:\n");  // Display output
    show(r, c, res2);              //Displays res2[][]

    return 0;  // Indicate successful program termination
}
