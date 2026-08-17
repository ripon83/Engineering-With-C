/*
 * Program: Matrix With Function 4
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int matA[256], matB[256];
    int r=4, c=4;                       //Rows and columns

    populate(matA, r, c, 5);            //Populates matrix A randomly
    printf("The matrix A is:\n");  // Display output
    show(matA, r, c);                   //Displays matrix A

    printf("\nAfter rotating the matrix A clockwise:\n");  // Display output
    rotateCW(matA, r, c);               //Rotates matrix A clockwise
    show(matA, r, c);                   //Displays the rotated matrix

    populate(matB, r, c, 5);            //Populates matrix B randomly
    printf("The matrix B is:\n");  // Display output
    show(matB, r, c);                   //Displays matrix B

    printf("\nAfter rotating the matrix B anticlockwise:\n");  // Display output
    rotateACW(matB, r, c);              //Rotates matrix B counterclockwise
    show(matB, r, c);                   //Displays the rotated matrix

    return 0;  // Indicate successful program termination
}
