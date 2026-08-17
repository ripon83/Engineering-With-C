/*
 * Program: Matrix With Function 2
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int r=3, c=4, matA[10][10], matB[10][10], res[10][10];
    populate(r, c, matA, 10);           //Populates the matA with random numbers less than 10
    populate(r, c, matB, 10);           //Populates the matB with random numbers less than 10
    
    printf("\nThe matrix A is:\n");  // Display output
    show(r, c, matA);                   //Displays the matrix matA
    
    printf("\nThe matrix B is:\n");  // Display output
    show(r, c, matB);                   //Displays the matrix matB
    
    add(r, c, matA, matB, res);         //Add matA[][] and matB[][], store the result in res[][]
    printf("\nThe resultant matrix after addition is:\n");  // Display output
    show(r, c, res);                    //Displays the resultant matrix
    
    sub(r, c, matA, matB, res);         //Subtracts matB[][] from matA[][], and stores the result in res[][]
    printf("\nThe resultant matrix after subtraction is:\n");  // Display output
    show(r, c, res);                    //Displays the resultant matrix
    return 0;  // Indicate successful program termination
}
