/*
 * Program: Program For Horizontal And Vertical Flipping
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

void flipH(int r, int c, int mat[r][c])
{
    int tmp[r][c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            tmp[i][c-j-1]=mat[i][j]; //Moves left column to right column

    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            mat[i][j]=tmp[i][j];    //Copies back the items
}

void flipV(int r, int c, int mat[r][c])
{
    int tmp[r][c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            tmp[r-i-1][j]=mat[i][j]; //Moves top row to bottom row

    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            mat[i][j]=tmp[i][j];    //Copies back the items
}

int main()  // Main function: execution starts here
{
    int matA[10][10], matB[10][20];
    int r=4, c=4;
    
    populate(r, c, matA);           //Populates matA[][] randomly
    populate(r, c, matB);           //Populates matB[][] randomly
    
    printf("\nThe matrix A is:\n");  // Display output
    show(r, c, matA);               //Displays matA[][]

    printf("\nThe matrix A after flipping horizontally:\n");  // Display output
    flipH(r, c, matA);              //Flips matA horizontally
    show(r, c, matA);               //Displays the flipped matrix
    
    printf("\nThe matrix B is:\n");  // Display output
    show(r, c, matB);               //Displays matB[][]

    printf("\nThe matrix B after flipping vertically:\n");  // Display output
    flipV(r, c, matB);              //Flips matB vertically
    show(r, c, matB);               //Displays the flipped matrix

    return 0;  // Indicate successful program termination
}
