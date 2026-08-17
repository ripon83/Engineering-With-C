/*
 * Program: Effect On The Underlying Array The Increment P1 Decrement P2 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int arr[6]={10, 20, 30, 40, 50, 60};  // Store a value in an array element
%     int *p1=&arr[0], *p2=&arr[4];
%     (*p1)++;   
%     (*p2)--;   
%     printf("%d\n", arr[p2-p1]);
%     for(int i=0; i<6; i++)
%         printf("%d\t", arr[i]);
%     return 0;
% }
%
