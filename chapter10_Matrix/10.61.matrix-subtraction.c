/*
 * Program: Matrix Subtraction
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int r=3, c=4, matA[100], matB[100], res[100];

    populate(matA, r, c, 10);       //Populates matA with random numbers less than 10
    populate(matB, r, c, 10);       //Populates matB with random numbers less than 10
    
    printf("\nThe matrix A is:\n");  // Display output
    show(matA, r, c);               //Displays matrix A
    
    printf("\nThe matrix B is:\n");  // Display output
    show(matB, r, c);               //Displays matrix B
    
    add(matA, matB, res, r, c);     //Adds matA and matB and stores the result in res
    printf("\nThe resultant matrix after addition is:\n");  // Display output
    show(res, r, c);                //Displays the resultant matrix
    
    sub(matA, matB, res, r, c);     //Subtracts matB from matA and stores the result in res
    printf("\nThe resultant matrix after subtraction is:\n");  // Display output
    show(res, r, c);                //Displays the resultant matrix

    return 0;  // Indicate successful program termination
}
