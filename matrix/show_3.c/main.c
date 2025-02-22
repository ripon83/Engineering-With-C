#include<stdio.h>
void show(int mat[], int r, int c)         //Shows the matrix
{
    for(int i=0;i<r;i++)        //Iterates the rows
    {
        for(int j=0;j<c;j++)    //Iterates the columns
            printf("%d\t",mat[i*c+j]);    //Prints the matrix items
        printf("\n");           //prints newline after each rows
    }   
}

int main()
{
    //Initializing the matrix
    int mat[9] ={1 , 2 , 3, 4, 5, 6, 7, 8, 9};
    printf("The matrix is:\n");
    show(mat, 3, 3);                  //Displays the matrix
    return 0;
}