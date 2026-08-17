/*
 * Program: Matrix With Function 5
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[9]={2, -2, -4, -1, 3, 4, 1, -2, -3};
    int r=3, c=3;                    //Rows and columns
    
    printf("\nMatrix A:\n");  // Display output
    show(mat, r, c);                 //Displays the matrix
    
    if(idempotent(mat, r, c))        //Checks idempotency
        printf("\nThe matrix is an idempotent\n");  // Display output
    else
        printf("\nThe matrix is not an idempotent\n");  // Display output

    return 0;  // Indicate successful program termination
}
