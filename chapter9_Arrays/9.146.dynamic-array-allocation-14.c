/*
 * Program: Dynamic Array Allocation 14
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(char str[], int n)
{
    int i, j;
    for(i=0, j=n-1; i<j; i++, j--)  // Iterate through array elements
    {
        char tmp=str[i];
        str[i]=str[j];  // Store a value in an array element
        str[j]=tmp;  // Store a value in an array element
    }
}

void conversion(int bin[], int n, char *symbols, int rep)
{
    char sym[32]="0123456789abcdefghijklmnopqrstuv";
    int i, j=0, k=0, count=0, d=0;
    int r;
    int buff[10];

    r=n%rep;

    if(rep<1 || rep>5)
    {
        printf("No representation. The %d should be within 1 to 5 bit\n",  // Display output
               rep);
        return;
    }

    for(i=n-1; i>=r; i--, k++)  // Iterate through array elements
    {
        d=d+bin[i]*(1<<k);
        count++;

        if(count==rep)
        {
            symbols[j]=sym[d];  // Store a value in an array element
            count=0;
            j++;
            k=-1;
            d=0;
        }
    }

    if(r!=0)
    {
        d=0;

        for(k=0; i>=0; i--, k++)  // Iterate through array elements
        {
            buff[k]=bin[i];  // Store a value in an array element
            d=d+buff[k]*(1<<k);
        }

        symbols[j++]=sym[d];  // Store a value in an array element
    }

    symbols[j]='\0';  // Store a value in an array element
    reverse(symbols, j);
}

int main()  // Main function: execution starts here
{
    int bin[]={1,0,0,1,0,1,1,0,1,0,1,1,1,1,0};    
    int n=sizeof(bin)/sizeof(bin[0]);

    // rep=3 for octal and rep=4 for hexadecimal.
    // rep=1, rep=2, and rep=5 are also possible.
    int rep=5; 

    char *symbols=(char *)malloc((n+1)*sizeof(char));  // Allocate memory dynamically

    conversion(bin, n, symbols, rep);

    printf("%s", symbols);  // Display output

    free(symbols);  // Release dynamically allocated memory
    return 0;  // Indicate successful program termination
}
