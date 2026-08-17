/*
 * Program: Lower Triangular Matrix 2
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

void LeftUpper(int r, int c, int mat[r][c])
{
    printf("The left-upper triangular matrix is:\n");  // Display output
    for(int i=0; i<r; i++)                  //Iterates the rows
    {
        for(int j=0; j<c; j++)              //Iterates the columns
        {
            if(i+j<=r-1)     //Left-upper triangular condition
                printf("%d\t", mat[i][j]);  // Display output
            else
                printf("\t");  // Display output
        }
        printf("\n");  // Display output
    }
}

void RightLower(int r, int c, int mat[r][c])
{
    printf("The right-lower triangular matrix is:\n");  // Display output
    for(int i=0; i<r; i++)                  //Iterates the rows
    {
        for(int j=0; j<c; j++)              //Iterates the columns
        {
            if(i+j>=r-1)     //Right-lower triangular condition
                printf("%d\t", mat[i][j]);  // Display output
            else
                printf("\t");  // Display output
        }
        printf("\n");  // Display output
    }
}

int main()  // Main function: execution starts here
{
    int r=4, c=4, mat[10][10];
    populate(r, c, mat, 10);   //Populates mat[][] with random numbers less than 10
    show(r, c, mat);           //Displays mat[][]

    LeftUpper(r, c, mat);      //Displays the left-upper triangular matrix
    RightLower(r, c, mat);     //Displays the right-lower triangular matrix
    return 0;  // Indicate successful program termination
}
