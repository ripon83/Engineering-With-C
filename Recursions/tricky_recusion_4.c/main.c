#include<stdio.h> 
int foo(int x, int y) 
{
   if (y == 0)
       return 0;
   if (y % 2 == 0)
       return foo(x+x, y/2); 
   return foo(x+x, y/2) + x;
} 
int main()
{
  printf("%d",foo(10,5));
  return 0;
}