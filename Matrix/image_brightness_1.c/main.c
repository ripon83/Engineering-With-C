#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show(int r, int c, int mat[r][c])         //Shows the matrix
{
    for(int i=0;i<r;i++)        //Iterates the rows
    {
        for(int j=0;j<c;j++)    //Iterates the columns
            printf("%d\t",mat[i][j]);    //Prints the matrix items
        printf("\n");           //prints newline after each rows
    }   
}

void populate(int r, int c, int mat[r][c])      //Popluating the image randomly
{
    srand(clock());                 //Changes the seed value of the rand()
    for(int i=0;i<r;i++)            //Number of rows
    {
        for(int j=0;j<c;j++)        //Number of column
            mat[i][j]=rand()%256;   //rand()%256 produces numbers between 0 to 255
    }
}


void brightness(int r, int c, int mat[r][c], int k)  //Increasing the brightness of the image
{
    for(int i=0;i<r;i++)            //Numbers of rows
    {
        for(int j=0;j<c;j++)        //Number of columns
        {
            int tmp=mat[i][j]+k;    //Adding the k to the matrix
            tmp=tmp>255?255:tmp;    //Pixel value cannot be more than 255
            tmp=tmp<0?0:tmp;        //Pixel value cannot be less than 0
            mat[i][j]=tmp;          //Assign the increased/decreased value to the matrix
        }
    }
}

int main()
{
    int mat[10][10], r=10,c=10;
    populate(r, c, mat);                //Populating the image randomly
    printf("\nThe matrix is:\n");
    show(r, c, mat);                    //Show the matrix
    
    int k=50;
    brightness(r, c, mat,k);            //Increasing the brightness of the image
    printf("\nThe image after increasing the brightness is:\n");
    show(r, c, mat);                    //Displaying the resultant matrix
    
    k=-100;
    brightness(r, c, mat, k);           //Decreasing the brightness of the image
    printf("\nThe image after decreasing the brightness is:\n");
    show(r, c, mat);                    //Displaying the resultant matrix    
    return 0;
}