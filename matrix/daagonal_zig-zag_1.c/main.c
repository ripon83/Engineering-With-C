#include <stdio.h>
void show(int r, int c, int mat[r][c])          //Dsiplays the matrix
{
    for(int i=0;i<r;i++)                        //Iterates the rows
    {
        for(int j=0;j<c;j++)                    //Ietartes the columns
            printf("%d\t",mat[i][j]);           //Prints the items
        printf("\n");                           //Prints a newline after each row
    }
}
void diagonal(int r, int c, int mat[r][c])      //Print diagonal in zig-zag order
{
    int i,j,row;
    for(i=0;i<r;i++)                            //Rows for the left-upper triangular matrix
    {
        row=i;
        for(j=0;j<=i;j++)                       //Columns in zig-zag order
            printf("%d\t",mat[row--][j]);       //Equivalent to printf("%d\t",mat[row--][j])
        printf("\n");                           //Print newline after every row
    }
    for(i=r-1;i>0;i--)                          //Rows for the right-lower triangular matrix
    {
        row=r-1;
        for(j=r-i;j<r;j++)                      //Column in zig-zag order
            printf("%d\t",mat[row--][j]);       //Equivalent to printf("%d\t",mat[row--][j])
        printf("\n");                           //Print newline after every row
    }
}
int main()
{
    int mat[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    printf("The marix is:\n");
    show(5, 5, mat);                            //Display the matrix
    printf("The diagonal zig-zag matrix is:\n");
    diagonal(5, 5, mat);                        //Displaying the diagonal matrix in zig-zag order
    return 0;
}
