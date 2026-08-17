/*
 * Program: Pointer And Array 14
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int a[5]={1, 2, 3, 4, 5};  // Store a value in an array element
%     int b[5]={5, 4, 3, 2, 1};  // Store a value in an array element
%     int *p=a;
%     printf("The first array:\n");
%     for(int i=0; i<5; i++)
%         printf("%d\t", *(p+i));
%     p=b;
%     printf("\nThe first array:\n");
%     for(int i=0; i<5; i++)
%         printf("%d\t", *(p+i));
%     return 0;
% }
%
