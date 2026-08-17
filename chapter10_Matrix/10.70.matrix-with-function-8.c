/*
 * Program: Matrix With Function 8
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int mat[]={1,2,3,4,5,6,7,8,9,10,
              11,12,13,14,15,16,17,18,19,20,
              21,22,23,24,25};

    show(mat, 5, 5);            //Displays the matrix
    printf("\n");  // Display output

    diagonal(mat, 5, 5);        //Displays the diagonal traversal
    return 0;  // Indicate successful program termination
}
