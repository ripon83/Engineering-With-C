/*
 * Program: Rotation Of A Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

void rotateCW(int r, int c, int mat[r][c])
{
    int tmp[r][c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            tmp[i][j]=mat[c-j-1][i]; //Rotates the matrix clockwise
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            mat[i][j]=tmp[i][j];    //Copies back the items
}

void rotateACW(int r, int c, int mat[r][c])
{
    int tmp[r][c];
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            tmp[c-j-1][i]=mat[i][j]; //Rotates the matrix anticlockwise
    for(int i=0; i<r; i++)          //Iterates the rows
        for(int j=0; j<c; j++)      //Iterates the columns
            mat[i][j]=tmp[i][j];    //Copies back the items
}

int main()  // Main function: execution starts here
{
    int matA[10][10], matB[10][10];
    int r=4, c=4;
    
    populate(r, c, matA);      //Populates matA[][] randomly 
    populate(r, c, matB);      //Populates matB[][] randomly
    
    printf("\nThe matrix A is:\n");  // Display output
    show(r, c, matA);          //Displays matA[][]
    
    printf("\nThe matrix after the clockwise rotation:\n");  // Display output
    rotateCW(r, c, matA);      //Rotates matA[][] clockwise
    show(r, c, matA);          //Displays the rotated matrix
    
    printf("\nThe matrix B is:\n");  // Display output
    show(r, c, matB);          //Displays matB[][]
    
    printf("\nThe matrix after the anticlockwise rotation:\n");  // Display output
    rotateACW(r, c, matB);     //Rotates matB[][] anticlockwise
    show(r, c, matB);          //Displays the rotated matrix
    
    return 0;  // Indicate successful program termination
}
