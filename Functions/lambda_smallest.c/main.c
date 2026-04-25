#include <stdio.h>
int main(){
    int l=3,m=2,n=12;
    int k=({int smallest(int l, int m, int n){
            if(l<m && l<n)
                return l;
            else if(m<n)
                return m;
            else
                return n;
        }
        smallest(l,m,n);
    });
    printf("The smallest: %d",k);
    return 0;
}