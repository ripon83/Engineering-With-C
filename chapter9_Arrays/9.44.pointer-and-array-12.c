/*
 * Program: Pointer And Array 12
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int array[5]={1, 2, 3, 4, 5};  // Store a value in an array element
%     int i, n=5;
%     for(i=0; i<n; i++)
%         printf("array[%d]=%d\n", i, *(array+i));  // Store a value in an array element
%     return 0;
% }
%
