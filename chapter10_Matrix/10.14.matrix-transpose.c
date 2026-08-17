/*
 * Program: Matrix Transpose
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[10][10], res[10][10];
    int r=3, c=4;
    populate(r, c, mat, 5);           //Populates the mat[][] with random numbers less than 5
    printf("\nMatrix A:\n");  // Display output
    show(r, c, mat);                  //Displays the matrix mat[][]

    //Transposes the matrix mat[][] and stores the result in res[][]
    transpose(r, c, mat, res); 
    
    printf("\nThe resultant matrix after the transpose operation is:\n");  // Display output
    show(c, r, res);                  //Displays the transposed matrix
    return 0;  // Indicate successful program termination
}
