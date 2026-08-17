/*
 * Program: Recursive Pattern 4
 * Purpose: Demonstrates the corresponding recursion concept
 *          presented in Chapter 7.
 */

% #include <stdio.h>
% void top(int n)
% {
%     if(n>=1)
%         top(n-1);  // Function call
%     for(int i=n; i>0; i--)
%         printf("%d\t", i);  // Function call
%     printf("\n");  // Function call
% }
% void bottom(int n)
% {
%     for(int i=n; i>0; i--)
%         printf("%d\t", i);  // Function call
%     printf("\n");  // Function call
%     if(n>=1)
%         bottom(n-1);  // Function call
% }
% void pattern(int n)
% {
%     top(n);  // Function call
%     bottom(n-1);  // Function call
% }
% int main()
% {
%     pattern(6);  // Function call
%     return 0;
% }
%
