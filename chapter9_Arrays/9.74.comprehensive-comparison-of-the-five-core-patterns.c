/*
 * Program: Comprehensive Comparison Of The Five Core Patterns
 * Purpose: Demonstrates the corresponding one-dimensional array
 *          concept presented in Chapter 9.
 */

% #include <stdio.h>
% int main()
% {
%     int a[5]={10, 20, 30, 40, 50};  // Store a value in an array element
%     int *p=a;
%     printf("%d\n", *p++);
%     printf("%d\n", (*p)++);
%     printf("%d\n", *(p++));
%     printf("%d\n", ++*p);
%     printf("%d\n", *++p);
%     return 0;
% }
%
