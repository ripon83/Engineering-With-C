/*
 * Program: Matrix Multiplication
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int matA[100], matB[100], res[100];
    int r=3, c=4, p=4, q=3;

    populate(matA, r, c, 5);        //Populates matrix A with random numbers less than 5
    populate(matB, p, q, 5);        //Populates matrix B with random numbers less than 5
    
    printf("\nMatrix A:\n");  // Display output
    show(matA, r, c);               //Displays matrix A
    
    printf("\nMatrix B:\n");  // Display output
    show(matB, p, q);               //Displays matrix B

    //Multiplies matrices A and B and stores the result in res
    mult(matA, r, c, matB, p, q, res);
    
    printf("\nThe resultant matrix after multiplication is:\n");  // Display output
    show(res, r, q);                //Displays the resultant matrix

    return 0;  // Indicate successful program termination
}
