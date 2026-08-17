/*
 * Program: Matrix With Function 10
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[10][10], r=10,c=10;
    populate(r, c, mat);                //Populating the image randomly
    printf("\nThe matrix is:\n");  // Display output
    show(r, c, mat);                    //Show the matrix
    
    int k=50;
    brightness(r, c, mat,k);            //Increasing the brightness of the image
    printf("\nThe image after increasing the brightness is:\n");  // Display output
    show(r, c, mat);                    //Displaying the resultant matrix
    
    k=-100;
    brightness(r, c, mat, k);           //Decreasing the brightness of the image
    printf("\nThe image after decreasing the brightness is:\n");  // Display output
    show(r, c, mat);                    //Displaying the resultant matrix    
    return 0;  // Indicate successful program termination
}
