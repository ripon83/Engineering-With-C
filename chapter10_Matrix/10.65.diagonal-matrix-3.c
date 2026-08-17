/*
 * Program: Diagonal Matrix 3
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[256], res[256];        
    int r=5, c=5;                  //Rows and columns

    populate(mat, r, c, 5);        //Populates the matrix randomly
    printf("The matrix A is:\n");  // Display output
    show(mat, r, c);               //Displays the populated matrix

    printf("\nAfter folding the matrix right diagonal:\n");  // Display output
    foldRight(mat, res, r, c);     //Folds to the right-upper triangle
    show(res, r, c);               //Displays the folded matrix

    printf("\nAfter folding the matrix left diagonal:\n");  // Display output
    foldLeft(mat, res, r, c);      //Folds to the left-upper triangle
    show(res, r, c);               //Displays the folded matrix

    return 0;  // Indicate successful program termination
}
