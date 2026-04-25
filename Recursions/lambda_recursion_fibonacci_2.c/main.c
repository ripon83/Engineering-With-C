#include <stdio.h>
int main(){
    int n=12;
    int fib=({int fact(int n){
                        if (n==1 || n==0)
                            return 1;
                        return n*fact(n-1);
                    }
                    fact(n);
                });
    printf("The Fibonacci is: %d",fib);
    return 0;
}