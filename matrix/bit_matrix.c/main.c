#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define setBit(n,p) (n|(1<<p))              //change a bit value of n to 1 at p position
#define getBit(n,p) ((n>>p)&1)              //get a bit value from n at p position
#define resetBit(n,p) (n&(~(1<<p)))         //change a bit value of n to 0 at p position
void set(int *ptr, int i, int j, int c)         //This is same as ptr[i][j]=1
{
    int l=i*c+j;                                //Calculating row-major order
    int k=l/32;                                 //Calculating the cell location
    int p=l%32;                                 //Calculating the bit position
    ptr[k]=setBit(ptr[k],p);                    //Assigning 1 at the bit position p in ptr[k]
}

int get(int *ptr, int i, int j, int c)      //This is same as ptr[i][j]
{
    int l=i*c+j;                            //Calculating row-major order
    int k=l/32;                             //Calculating the cell location
    int p=l%32;                             //Calculating the bit position
    return getBit(ptr[k],p);                //Get the value at the bit position p from ptr[k]
}

void reset(int *ptr, int i, int j, int c)   //This is same as ptr[i][j]=0
{           
    int l=i*c+j;                            //Calculating row-major order
    int k=l/32;                             //Calculating the cell location
    int p=l%32;                             //Calculating the bit position
    ptr[k]=resetBit(ptr[k],p);              //Set the bit value to 0 of ptr[k] at p bit position
}

void populate(int *ptr, int r, int c)       //Randomly populating the bit matrix
{
    int i,j;
    srand(clock());                         //Change the seed value the random() function
    for(i=0;i<r;i++)                
        for(j=0;j<c;j++)
            if(rand()&1==1)                 //If the random number is odd
                set(ptr, i, j, c);          //set it to 1 or ptr[i][j]=1
}

void show(int *ptr, int r, int c)           //Display the bit matrix
{
    int i,j;
    for(i=0;i<r;i++)                        //Number of rows
    {
        for(j=0;j<c;j++)                    //Number of columns
            printf("%d\t",get(ptr,i,j,c));  //Equivalent to printf("%d\t",ptr[i][j])
        printf("\n");                       //Print newline after each row
    }
}

int *allocate(int row, int col)                 //Allocate 2D bit matrix
{
    int r=row>0?row:1;                          //Row cannot be 0
    int c=col>0?col:1;                          //Column cannot be 0
    int t=(r*c)/32.0+0.99999999;                //Calculating the total array cell requriement
    int *ptr=(int *)malloc(t*sizeof(int));      //Allocating memory of $t$ cells`
    for(int i=0;i<t;i++)                        //Initializing the allocated memory
        ptr[i]=0;                               //to zero
    printf("Allocated size for %d x %d matrix is: %d bytes or %d bits\n",r,c,t*4,t*4*8);
    printf("Wastage: %d bits\n",t*4*8-r*c);
    return ptr;
}

int main()
{
    int r=10,c=12;                      //Dimensions of the bit matrix
    int *bitMatrix=allocate(r, c);       //Allocate the bit matrix
    populate(bitMatrix, r, c);            //Automatically and randomly populate the bit matrix
    printf("\n\n");
    show(bitMatrix, r, c);                //Display the bit matrix
    
    reset(bitMatrix, 2, 3, c);             //Reset the bit position 2 and 3, i.e., bitMatrix[2][3]=0
    
    printf("\n\nAfter resetting, the matrix is:\n");
    show(bitMatrix, r, c);                //Display the bit matrix after resetting
    
    return 0;
}