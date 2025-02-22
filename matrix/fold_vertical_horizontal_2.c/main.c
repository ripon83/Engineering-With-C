#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void populate(int mat[], int r, int c, int k)   //Randomly populating the matrix
{
    srand(clock());                 //Changing the seed value of rand()
    for(int i=0; i<r; i++)          //Number of rows
        for(int j=0; j<c; j++)      //Number of columns
            mat[i*c+j]=rand()%k;    //Assigning random number less than k
}
void show(int mat[], int r, int c)         //Shows the matrix
{
    for(int i=0;i<r;i++)        //Iterates the rows
    {
        for(int j=0;j<c;j++)    //Iterates the columns
            printf("%d\t",mat[i*c+j]);    //Prints the matrix items
        printf("\n");           //prints newline after each rows
    }   
}
void foldVertical(int mat[], int r, int c, int res[])
{
	int i, j, k;
	for(i=0; i<r; i++)                 //Iterates the rows
		for(j=0; j<c; j++)            //Iterates the columns
			res[i*c+j]=0;                 //Initialize the matrix
	for(i=0; i<r; i++)                 //Iterates the rows
	{
		for(j=0; j<c/2; j++)          //Iterates half of the columns
			res[i*c+j]=mat[i*c+j] + mat[i*c+(c-j-1)]; //Fold the matrix
		if(c&1)                           //If column size is odd,  
			res[i*c+j]=mat[i*c+j];         //just copy the items
	}
}
void foldHorizontal(int mat[], int r, int c, int res[])
{
	int i, j, k;
	for(i=0; i<r; i++)             //Iterates the rows
		for(j=0; j<c; j++)            //Iterates the columns
			res[i*c+j]=0;             //Initializes the matrix
	for(i=0; i<r/2; i++)           //Iterates half rows
	{
		for(j=0; j<c; j++)        //Iterates the columns
			res[i*c+j]=mat[i*c+j] + mat[(r-i-1)*c+j];     //Fold the matrix
	}
	if(r&1)                        //If the row size is odd, copy the remaining item
		for(j=0; j<c; j++)
			res[i*c+j]=mat[i*c+j];
}
int main()
{
	int r=5, c=5, mat[100], res1[100], res2[100];
	populate(mat, r, c, 10);       //Populates the matrix mat[][] randomly
	printf("\nThe matrix A is:\n");
	show(mat, r, c);               //Displays the matrix mat[][]
                        //Folds the matrix vertically and stores the result in res1[][]
	foldVertical(mat, r, c, res1);   
	printf("\nThe resultant matrix after the fold vertically is:\n");
	show(res1, r, c);              //Displays the resultant matrix res1[][]
                        //Folds the matrix horizontally and stores the result in res1[][]
	foldHorizontal(mat, r, c, res2);
	printf("\nThe resultant matrix after the fold horizontally is:\n");
	show(res2, r, c);              //Displays the resultant matrix res2[][] 
	return 0;
}