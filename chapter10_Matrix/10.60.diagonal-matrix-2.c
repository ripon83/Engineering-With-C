/*
 * Program: Diagonal Matrix 2
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[100], r=5, c=5;
    populate(mat, r, c, 10);

    printf("The matrix is:\n");  // Display output
    show(mat, r, c);                    //Displays the matrix

    printf("The principal diagonal elements are:\n");  // Display output
    PDE(mat, r, c);                     //Displays the PDE

    printf("\nThe secondary principal diagonal elements are:\n");  // Display output
    SPDE(mat, r, c);                    //Displays the SPDE
    return 0;  // Indicate successful program termination
}
