/*
 * Program: Diagonal Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

void PDE(int r, int c, int mat[r][c])
{
    printf("The principal diagonal elements are:\n");  // Display output
    for(int i=0; i<r; i++)              //Iterates the rows
        printf("%d\t", mat[i][i]);       //Prints principal diagonal element
    printf("\n");  // Display output
}

void SPDE(int r, int c, int mat[r][c])
{
    printf("The secondary principal diagonal elements are:\n");  // Display output
    for(int i=0; i<r; i++)              //Iterates the rows
        printf("%d\t", mat[i][r-i-1]);   //Prints secondary diagonal element
    printf("\n");  // Display output
}

int main()  // Main function: execution starts here
{
    int r=4, c=4, mat[10][10];
    populate(r, c, mat, 10);   //Populates mat[][] with random numbers less than 10
    show(r, c, mat);            //Displays mat[][]
    PDE(r, c, mat);             //Displays the principal diagonal elements
    SPDE(r, c, mat);            //Displays the secondary principal diagonal elements
    return 0;      // Indicate successful program termination
}
