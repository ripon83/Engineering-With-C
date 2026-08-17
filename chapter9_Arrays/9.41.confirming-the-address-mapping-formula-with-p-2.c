/*
 * Program: Confirming The Address Mapping Formula With P 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int a[5]={1, 2, 3, 4, 5};  // Store a value in an array element
%     int i, n=5;
%     for(i=0; i<n; i++)
%         printf("a[%d]=%p\n", i, &a[i]);  // Store a value in an array element
%     return 0;
% }
%
