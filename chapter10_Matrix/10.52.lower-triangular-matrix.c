/*
 * Program: Lower Triangular Matrix
 * Purpose: Demonstrates the corresponding multidimensional-array
 *          concept presented in Chapter 10.
 */

void Upper(int r, int c, int mat[r][c])
{
    printf("The upper triangular matrix is:\n");  // Display output
    for(int i=0; i<r; i++)                  //Iterates the rows
    {
        for(int j=0; j<c; j++)              //Iterates the columns
        {
            if(i<=j)                //If i<=j, mat[i][j] is an upper-triangular item
                printf("%d\t", mat[i][j]);   //Prints the upper-triangular item
            else
                printf("\t");                //Otherwise, prints tab space
        }
        printf("\n");  // Display output
    }
}

void Lower(int r, int c, int mat[r][c])
{
    printf("The lower triangular matrix is:\n");  // Display output
    for(int i=0; i<r; i++)                  //Iterates the rows
    {
        for(int j=0; j<c; j++)              //Iterates the columns
        {
            if(i>=j)                //If i>=j, mat[i][j] is a lower-triangular item
                printf("%d\t", mat[i][j]);   //Prints the lower-triangular item
            else
                printf("\t");                //Otherwise, prints tab space
        }
        printf("\n");  // Display output
    }
}

int main()  // Main function: execution starts here
{
    int r=4, c=4, mat[10][10];
    populate(r, c, mat, 10);       //Populates mat[][] with random numbers less than 10
    show(r, c, mat);               //Displays mat[][]
    Lower(r, c, mat);              //Displays the lower-triangular matrix
    Upper(r, c, mat);              //Displays the upper-triangular matrix
    return 0;  // Indicate successful program termination
}
