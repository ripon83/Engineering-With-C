#include <stdio.h>
int main(){
    int n=12;
    printf("%d",({int fact(int n){
                        if (n==1 || n==0)
                            return 1;
                        return n*fact(n-1);
                    }
                    fact(n);
                }));
    return 0;
}