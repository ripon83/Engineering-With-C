#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void _init_(int mat[], int r, int c)        //Initialize the matrix to zero
{
    for(int i=0;i<r;i++)                    //Number of rows
        for(int j=0;j<c;j++)                //Number of column
            mat[i*c+j]=0;                   //Equivalenet to mat[i][j]=0
}

//Populate the matrix automatically and randomly
void populate(int mat[], int r, int c, int k)       
{
    int i,j,l;
    srand(time(NULL));                  //Changing the seed value of rand()
    for(l=0;l<k;l++)                    //To populate k mines in the matrix
    {
        i=rand()%r;                     //Randomly selecting the row
        j=rand()%c;                     //Randomly selecting the column
                                        
        while(mat[i*c+j]==-1)           //If the mat[i][j] is already containing mine
        {                               //Repeat the while loop
            i=rand()%r;                 //Randomly selecting the row
            j=rand()%c;                 //Randomly selecting the column
        }
        mat[i*c+j]=-1;                  //Place mine as mat[i][j]=-1
    }
}

void Hints(int mat[], int r, int c)                 //Generating hints for each cell
{
    int i,j,cnt;                                    
    for(i=0;i<r;i++)                                //Total number of rows
    {
        for(j=0;j<c;j++)                            //Total number of columns
        {
            cnt=0;                                  //Reset the counter to 0 for each cell
            if(mat[i*c+j]==0)                       //if mat[i][j]==0
            {
                if(i-1>=0 && j-1>=0)                    //Checking the boundary condition
                    cnt+=(mat[(i-1)*c+j-1]==-1)?1:0;    //for Cell 1
                if(i-1>=0)                              //Checking the boundary condition
                    cnt+=(mat[(i-1)*c+j]==-1)?1:0;      //Cell 2
                if(i-1>=0&& j+1<c)                      //Checking the boundary condition
                    cnt+=(mat[(i-1)*c+j+1]==-1)?1:0;    //Cell 3
                if(j-1>=0)                              //Checking the boundary condition
                    cnt+=(mat[i*c+j-1]==-1)?1:0;        //Cell 4
                if(j+1<c)                               //Checking the boundary condition
                    cnt+=(mat[i*c+j+1]==-1)?1:0;        //Cell 5
                if(i+1<r&&j-1>=0)                       //Checking the boundary condition
                    cnt+=(mat[(i+1)*c+j-1]==-1)?1:0;    //Cell 6
                if(i+1<r)                               //Checking the boundary condition
                    cnt+=(mat[(i+1)*c+j]==-1)?1:0;      //Cell 7
                if(i+1<r&&j+1<c)                        //Checking the boundary condition
                    cnt+=(mat[(i+1)*c+j+1]==-1)?1:0;    //Cell 8
                mat[i*c+j]=cnt;
            }            
        }
    }
}

void show(int mat[], int r, int c)          //Displays the matrix
{
    for(int i=0;i<r;i++)                    //Iterates the rows
    {
        for(int j=0;j<c;j++)                //Iterates the column
            printf("%d\t",mat[i*c+j]);      //Prints the items
        printf("\n");                       //Prints a newline after each row
    }
}

int main()
{
    int mat[1024];                      //Maximum array size is 1024
    int r=5,c=10;                      //initializing the rows and column
    _init_(mat,r,c);                    //Initializing the matrix to zero
    int k=r*c/4;                        //Calculating the total number of mines
    populate(mat,r,c,k);                //Placing the mines randomly and automatically
    show(mat,r,c);                      //Displaying the matrix
    printf("\nGenerating hints:\n");    
    Hints(mat,r,c);                     //Generating the hints for the mines
    show(mat,r,c);                      //Displaying the matrix with hints and mines
    return 0;
}