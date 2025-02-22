#include<stdio.h>
void show(int r, int c, int sm[r][c])   //Displays the matrix
{
    for(int i=0;i<r;i++)                //Iterates the rows
    {
        for(int j=0;j<c;j++)            //Iterates the columns
            printf("%d\t",sm[i][j]);    //Prints the matrix items
        printf("\n");                   //Prints newline after each row
    }
}
void display(int t, int cm[3][t])       //Displays the sparse matrix
{
    for (int i=0; i<3; i++)             //Three rows which is fixed
    {
        for (int j=0; j<t; j++)         //Ietrates $t$ columns
            printf("%d ", cm[i][j]);    //Prints the matrix items
        printf("\n");                   //Prints newline after each row
    }
}

int count(int m, int n, int sm[m][n])       //Counts the empty items from the matrix
{
    int count=0;                            //Initialize the counter to zero
    for (int i = 0; i < m; i++)             //Iterates the rows
        for (int j = 0; j < n; j++)         //Iterates the column
            if (sm[i][j] != 0)              //Counts if non-zero entries
                count++;                    //Increments the counter for non-zero items
    return count;                           //Returns total non-zero items
}

void sparse(int r, int c, int sm[r][c], int t, int cm[][t])
{
    int k = 0;                          //k is the iterator for column
    for (int i = 0; i < r; i++)         //Iterates the rows
    {
        for (int j = 0; j < c; j++)     //Iterates the columns
        {
            if (sm[i][j] != 0)          //If the item is not zero
            {                           //Assign the item to the cm[][]
                cm[0][k] = i;           //Records the row   
                cm[1][k] = j;           //Records the column
                cm[2][k] = sm[i][j];    //Assign the value
                k++;                    //Increment the column
            }
        }
    }
}

int main()
{
    int r=4,c=5;
    int sm[][5] =
            {
                {0 , 0 , 3 , 0 , 4 },
                {0 , 0 , 5 , 7 , 0 },
                {0 , 0 , 0 , 0 , 0 },
                {0 , 2 , 6 , 0 , 0 }
            };
    int t = count(r, c, sm);        //Counts the non-zero entries
    int cm[3][t];                   //Compact matrix of 3 rows and t columns
    sparse(r, c, sm, t, cm);        //Converting the sparse matrix to compact matrix
    printf("The sparse matrix is:\n");
    show(r, c, sm);                 //Displays the original matrix
    printf("\nThe compact matrix is:\n");
    display(t, cm);                 //Displays the compact matrix
    return 0;
}