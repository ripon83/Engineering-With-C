#include <stdio.h>
int main(){
    int m=2,n=12;
    printf("%d",({int mult(int m, int n){
                        return m*n;
                    }
                    mult(m,n);
                }));
    return 0;
}