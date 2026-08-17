/*
 * Program: Lower Triangular Matrix 3
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int r=4, c=4, mat[100];
    
    populate(mat, r, c, 10);            //Populates the matrix randomly
    show(mat, r, c);                    //Displays the matrix
    
    leftUpper(mat, r, c);               //Displays the left-upper triangular matrix
    leftLower(mat, r, c);               //Displays the left-lower triangular matrix
    rightUpper(mat, r, c);              //Displays the right-upper triangular matrix
    rightLower(mat, r, c);              //Displays the right-lower triangular matrix

    return 0;  // Indicate successful program termination
}
