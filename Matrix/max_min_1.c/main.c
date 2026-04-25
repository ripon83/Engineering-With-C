#include <stdio.h>
void show(int r, int c, int mat[r][c])          //Displays the matrix
{
    for(int i=0;i<r;i++)                    //Iterates the rows
    {
        for(int j=0;j<c;j++)                //Iterates the column
            printf("%d\t",mat[i][j]);      //Prints the items
        printf("\n");                       //Prints a newline after each row
    }
}
void maxRow(int r, int c, int mat[r][c])    //Displaying the maximum item in each row
{
    int i,j,max;
    for(i=0;i<r;i++)                    //Number of rows
    {                                   //Initially, the first item of each row is the maximum 
        max=mat[i][0];                 //Initialize the max
        for(j=0;j<c;j++)                //Iterating each column        
        {
            if(max<mat[i][j])          //If the mat[i][j] is the largest 
                max=mat[i][j];         //Update max as max=mat[i][j]
        }
        printf("Maximum of %d row is %d\n",i+1,max);
    }
}

void maxCol(int r, int c, int mat[r][c])    //Displaying the maximum item in each row
{
    int i,j,max,col=0;
    for(i=0;i<r;i++)                    //Number of rows
    {                               //Initially, the first item of each column is the maximum
        max=mat[0][col++];             //Initialize the max=mat[0][col]
        for(j=0;j<c;j++)                //Iterating each column  
        {       
            if(max<mat[j][i])          //If the mat[j][i] is the largest 
                max=mat[j][i];         //Update max as max=mat[j][i]
        }
        printf("Maximum of %d col is %d\n",col,max);
    }
}

void minRow(int r, int c, int mat[r][c])        //Displaying the minimum item in each row
{
    int i,j,min;
    for(i=0;i<r;i++)                        //Number of rows
    {                                   //Initially, the first item of each row is the minimum
        min=mat[i][0];                     //Initialize the min=mat[i][0]
        for(j=0;j<c;j++)                    //Iterating each column 
        {
            if(min>mat[i][j])              //If the mat[i][j] is the smallest
                min=mat[i][j];             //Update max as max=mat[i][j]
        }
        printf("Minimum of %d row is %d\n",i+1,min);
    }
}

void minCol(int r, int c, int mat[r][c])        //Displaying the minimum item in each column
{
    int i,j,min,col=0;
    for(i=0;i<r;i++)                        //Number of rows
    {                                   //Initially, the first item of each column is the minimum
        min=mat[0][col++];                 //Initialize the min=mat[0][col]
        for(j=0;j<c;j++)                    //Iterating each column 
        {
            if(min>mat[j][i])              //If the mat[j][i] is the smallest
                min=mat[j][i];             //Update max as max=mat[j][i]
        }
        printf("Minimum of %d col is %d\n",col,min);
    }
}

int main()
{
    int mat[3][3]={{10,12,3},{14,5,6},{7,0,9}};           //Matrix in 1D format
    show(3, 3, mat);                              //Display the 3x3 matrix
    printf("\n");
    maxRow(3, 3, mat);                            //Display the maximum items from each row
    printf("\n");
    maxCol(3, 3, mat);                            //Display the maximum items from each column
    printf("\n");
    minRow(3, 3, mat);                            //Display the minimum items from each row
    printf("\n");
    minCol(3, 3, mat);                            //Display the minimum items from each column
    return 0;
}