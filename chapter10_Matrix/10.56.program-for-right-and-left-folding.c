/*
 * Program: Program For Right And Left Folding
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

int main()  // Main function: execution starts here
{
    int r=4, c=4;
    int mat[10][10], res1[10][10], res2[10][10];
    populate(r, c, mat, 10);       //Populates mat[][] randomly with numbers less than 10

    printf("The matrix is:\n");  // Display output
    show(r, c, mat);               //Displays mat[][]

    printf("The right-folded matrix is:\n");  // Display output
    foldRight(r, c, mat, res1);   //Folds mat[][] to the right
    show(r, c, res1);              //Displays the right-folded matrix

    printf("The left-folded matrix is:\n");  // Display output
    foldLeft(r, c, mat, res2);    //Folds mat[][] to the left
    show(r, c, res2);              //Displays the left-folded matrix
}
