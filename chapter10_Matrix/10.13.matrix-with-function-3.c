/*
 * Program: Matrix With Function 3
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int matA[10][10], matB[10][10], res[10][10];
    int r=3, c=4, p=4, q=3;
    populate(r, c, matA, 5);        //Populates the matA[][] with random numbers less than 5
    populate(p, q, matB, 5);        //Populates the matB[][] with random numbers less than 5
    
    printf("\nMatrix A:\n");  // Display output
    show(r, c, matA);               //Displays the matrix matA
    
    printf("\nMatrix B:\n");  // Display output
    show(p, q, matB);               //Displays the matrix matB

    //Multiplies matA[][] and matB[][], stores the result in res[][]
    mult(r, c, matA, p, q, matB, res);      
    
    printf("\nThe resultant matrix after multiplication is:\n");  // Display output
    show(r, q, res);                //Displays the resultant matrix
    return 0;  // Indicate successful program termination
}
