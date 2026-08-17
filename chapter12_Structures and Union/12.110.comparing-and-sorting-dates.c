/*
 * Program 12.110: Comparing and Sorting Dates
 *
 * This program was extracted from Chapter 12.
 * Comments have been added to explain the main parts of the program.
 */

#include <stdio.h>

// Define a structure used by the program.
typedef struct date
{
    int dd, mm, yyyy;
}Date;

void swap(Date *x, Date *y)
{
    Date tmp=*x;
    *x=*y;
    *y=*tmp;
}

int compare(Date x, Date y, int choice)
{
    if(choice == 1)
        return x.dd-y.dd;

    if(choice == 2)
        return x.mm-y.mm;

    if(choice == 3)
        return x.yyyy-y.yyyy;

    return 0;
}

int partition(Date d[], int low, int high, int choice)
{
    Date pivot=d[low];
    int i=low-1;
    int j=high+1;

    while(1)
    {
        do {
            i++;
        } while(compare(d[i], pivot, choice)<0);

        do {
            j--;
        } while(compare(d[j], pivot, choice)>0);

        if(i>=j)
            return j;

        swap(&d[i], &d[j]);
    }
}

void quickSort(Date d[], int low, int high, int choice)
{
    if(low<high)
    {
        int pi=partition(d, low, high, choice);

        quickSort(d, low, pi, choice);
        quickSort(d, pi+1, high, choice);
    }
}

void display(Date d[], int n)
{
    printf("\n");

    for(int i=0; i<n; i++)
        printf("%02d-%02d-%d\n",
               d[i].dd, d[i].mm, d[i].yyyy);

    printf("\n");
}

// The main function is the entry point of the program.
int main()
{
    // Execute the statements of the program.
    Date d[7]={{25,12,2021},
               {1,1,2026},
               {12,5,2023},
               {3,1,2022},
               {7,6,2023},
               {15,3,2022},
               {12,9,2020}};

    int choice;
    int n=7;

    printf("The dates are:\n");
    display(d, n);

    while(1)
    {
        printf("Sort the dates:\n");
        printf("1. Sort by day\n");
        printf("2. Sort by month\n");
        printf("3. Sort by year\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice<=0 || choice>=4)
            break;

        quickSort(d, 0, n-1, choice);

        printf("\nSorted Dates:\n");
        display(d, n);
    }

    return 0;
}
