/*
 * Program: Array Searching
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

void deletion(int a[], int n, int k)
{
    int i, j;
    for(i=0; i<n; i++){ //O(n)
        if(a[i]==k){  //Linear search
            j=i;
            break;
        }
    }
    for(i=j; i<n-1; i++)  //O(n-j)=O(n)
        a[i]=a[i+1];  // Store a value in an array element
}
int main()  // Main function: execution starts here
{
    int a[100];
    int i, n=10, k=6;
    for(i=0; i<n; i++)  // Iterate through array elements
        a[i]=rand()%10;  // Store a value in an array element
    printf("The array:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    deletion(a, n, k);
    n--;
    printf("\nAfter deletion:\n");  // Display output
    for(i=0; i<n; i++)  // Iterate through array elements
        printf("%d\t", a[i]);  // Display output
    return 0;  // Indicate successful program termination
}
