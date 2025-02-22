#include <stdio.h>
int hasDuplicate(int mat[])          //Check whether the array conatins duplicate item of not
{
    int b[10],i;                        //Buffer array b[10], because of it contains 1 to 9
    for(i=0;i<=9;i++)                   //Initialize the buffer array to zero
        b[i]=0;
    for(i=1;i<=9;i++)                   //Iterates only 9 times
    {
        b[mat[i]]++;                    //Counting the frequencies of the items
        if(b[mat[i]]>1)                 //If the item frequency is greater than 1
            return 1;                   //Return 1 means duplicate items present in the array
    }
    return 0;                           //Otherwise, return 0, means unique items are in the array
}

int checkRow(int mat[9][9])             //Check each row of the matrix for uniqueness
{
    int i,j,buff[10],k=0;               //Temporary array buff[10] to copy a row
    for(i=0;i<9;i++)                    //Iterates 9 times because the matrix has 9 rows only 
    {
        k=0;
        for(j=0;j<9;j++)                //Iterates 9 times because each row contains 9 items
            buff[k++]=mat[i][j];        //Copy the row of the matrix into buff
        if(hasDuplicate(buff))          //If the buffer contains duplicate items
            return 1;                   //Return 1 means the array contains duplicate items
    }
    return 0;                           //Return 0 means the array contains unique items
}

int checkCol(int mat[9][9])             //Check each column of the matrix for uniqeuness
{
    int i,j,buff[10],k=0;               //Temporary array buff[10] to copy a column
    for(i=0;i<9;i++)                    //Iterates 9 times because the matrix has 9 column only
    {
        k=0;
        for(j=0;j<9;j++)                //Iterates 9 times because each column has 9 items 
            buff[k++]=mat[j][i];        //Copy the column items into buff
        if(hasDuplicate(buff))          //If the buff contains duplicate items
            return 1;                   //Return 1 means the array contains duplicate items 
    }
    return 0;                           //Return 0 means the array contains unique items
}

int checkSub(int mat[9][9])                     //Check each submatrix for uniqueness
{
    int buff[10],i,j,k=0,r=0,c=0,rc=3,cc=3;     
    for(r=0;r<3;r++)                            //3 rows of submatrix
    {
        for(c=0;c<3;c++)                        //3 columns of submatrix
        {
            k=0;
            for(i=r*3;i<(r+1)*3;i++)            //3 rows in the submatrix
            {
                for(j=c*3;j<(c+1)*3;j++)        //3 columns in the submatrix
                    buff[k++]=mat[i][j];        //Copy the submstrix into buff
            }
            if(hasDuplicate(buff))              //If the buff contains duplicate items
                return 1;                       //Submtarix contains duplicate items
        }
    }
    return 0;
}

void check(int mat[9][9])
{
    int buff[10],flag=0,i,j,k=0;
    if(checkRow(mat))                           //checking the rows for uniqueness
    {
        printf("Incorrect solution");           //If this statement is executed
        return;                                 //Function returns means function exits
    }
    if(checkCol(mat))                           //checking the colums for uniqueness
    {
        printf("Incorrect solution");           //If this statement is executed
        return;                                 //Function returns means function exits
    }
    if(checkSub(mat))                           //checking the submatrix for uniqueness
    {
        printf("Incorrect solution");           //If this statement is executed
        return;                                 //Function returns means function exits
    }
    printf("Valid solution");                   //Otherwise, the solution is valid
}

int main()
{                                       //A solution of 9 by 9 matrix
    int sudoku[9][9]={{1,2,3,4,5,6,7,8,9},  
		{7,8,9,1,2,3,4,5,6},
		{4,5,6,7,8,9,1,2,3},
		{3,1,2,8,4,5,9,6,7},
		{6,9,7,3,1,2,8,4,5},
		{8,4,5,6,9,7,3,1,2},
		{2,3,1,5,7,4,6,9,8},
		{9,6,8,2,3,1,5,7,4},
		{5,7,4,9,6,8,2,3,1}};
	   check(sudoku);                  //Checking whether the sudoku solution is valid or not
	   return 0;
}