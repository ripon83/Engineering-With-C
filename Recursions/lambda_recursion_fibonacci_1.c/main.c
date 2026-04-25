#include <stdio.h>
int main(){
    int n=12;
    int fact=({int fib(int n){
                        if (n <= 1)
                            return n;
                        return fib(n-1) + fib(n-2);
                    }
                    fib(n);
                });
    printf("The factorial is %d",fact);
    return 0;
}