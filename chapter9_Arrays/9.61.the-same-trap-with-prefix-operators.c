/*
 * Program: The Same Trap With Prefix Operators
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int arr[6]={11, 21, 31, 41, 15, 18};  // Store a value in an array element
%     int *p1=&arr[0], *p2=&arr[4];
%     printf("%d  %d  %d\n", arr[p2-p1], ++*p1, --*p2);
%     return 0;
% }
%
