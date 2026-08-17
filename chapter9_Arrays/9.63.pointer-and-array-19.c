/*
 * Program: Pointer And Array 19
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int arr[6]={10, 20, 30, 40, 50, 60};  // Store a value in an array element
%     int *p1=&arr[0], *p2=&arr[4];
%     p1=&arr[p2 -(++p1)];
%     printf("%d  %d\n", *p1, *p2);
%     return 0;
% }
%
