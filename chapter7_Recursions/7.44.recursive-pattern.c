/*
 * Program: Recursive Pattern
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

% #include <stdio.h>
% void pattern(int n)
% {
%     int i;
%     if(n>=1)
%         pattern(n-1);  // Function call
%     for(i=1; i<=n; i++)
%         printf("%d\t", i);  // Function call
%     printf("\n");      // Function call
% }
% int main()
% {
%     pattern(6);  // Function call
%     return 0;
% }
%
