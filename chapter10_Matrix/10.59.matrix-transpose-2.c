/*
 * Program: Matrix Transpose 2
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[100], res[100];
    int r=3, c=4;
    populate(mat, r, c, 5);           //Populates the matrix with random numbers less than 5

    printf("\nMatrix A:\n");  // Display output
    show(mat, r, c);                  //Displays the original matrix

    transpose(mat, r, c, res);        //Transposes mat[] and stores it in res[]

    printf("\nThe resultant matrix after the transpose operation is:\n");  // Display output
    show(res, c, r);                  //Displays the transposed matrix
    return 0;  // Indicate successful program termination
}
