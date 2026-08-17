/*
 * Program: Three Equivalent Ways To Access The Same Element 2
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int a[5]={1, 2, 3, 4, 5};  // Store a value in an array element
%     int *p=a;
%     for(int i=0; i<5; i++)
%         printf("%d  %d  %d\n", *(p+i), p[i], i[p]);
%     return 0;
% }
%
