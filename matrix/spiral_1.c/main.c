#include <stdio.h>
void show(int r, int c, int mat[r][c])          //Displays the matrix
{
    for(int i=0;i<r;i++)                        //Iterates the rows
    {
        for(int j=0;j<c;j++)                    //Iterates the column
            printf("%d\t",mat[i][j]);           //Prints the items
        printf("\n");                           //Prints a newline after each row
    }
}
void Spiral(int r, int c, int mat[r][c])        //Displaying the matrix spirally
{                                               //Initialize the top and left to zero
    int i,top=0, bottom=r-1, left=0, right=c-1; //Initialize the bottom=r-1 and right=c-1  
                                                //If top and bottom, and left and right 
    while (top <= bottom && left <= right)      //does not meet, continue the while loop
    {
        for (i = left; i <= right; i++)         //Prints from left to right
            printf("%d ", mat[top][i]);        //Equivalent to printf("%d\t",mat[top][j])
        top++;                                  //One top row printed, so top++
        for (i = top; i <= bottom; i++)         //Prints the top to bottom
            printf("%d ", mat[i][right]);      //Equivalent to printf("%d\t",mat[i][right])
        right--;                                //One right column printed, so right --
        if (top <= bottom)                      //If top and bottom do not meet
        {
            for (i = right; i >= left; i--)     //Print from right to left
                printf("%d ", mat[bottom][i]); //Equivalent to printf("%d\t",mat[bottom][j])
            bottom--;                           //One bottom row printed, so bottom--`
        }
        if (left <= right)                      //If left or right do not meet
        {
            for (int i = bottom; i >= top; i--) //Print from bottom to top
                printf("%d ", mat[i][left]);   //Equivalent to printf("%d\t",mat[i][left])
            left++;                             //One left column has printed, so, left++
        }
    }
}
int main() {
    int mat[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    printf("The matrix is:\n");
    show(5, 5, mat);
    printf("The spiral order of the matrix is:\n");
    Spiral(5, 5, mat);
    return 0;
}