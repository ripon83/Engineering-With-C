/*
 * Program: Pointer To Const 5
 * Purpose: Demonstrates the corresponding pointer concept
 *          presented in Chapter 8.
 */

% #include <stdio.h>

% int main()
% {
%     int x = 10, y = 20;
%     const int *ptr = &x;

%     printf("%d\t", *ptr);

%     ptr = &y;

%     printf("%d", *ptr);

%     return 0;
% }
%
