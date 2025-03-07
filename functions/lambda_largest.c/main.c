#include <stdio.h>
int main(){
    int l=3,m=2,n=12;
    int k=({int largest(int l, int m, int n){
            if(l>m && l>n)
                return l;
            else if(m>n)
                return m;
            else
                return n;
        }
        largest(l,m,n);
    });
    printf("The largest:%d",k);
    return 0;
}