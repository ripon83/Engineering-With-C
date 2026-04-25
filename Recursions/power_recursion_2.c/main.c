#include <stdio.h>
int power(int n, int e) {
    if (e == 0)
        return 1;
    if (e % 2 == 0)
       return power(n * n, e / 2);
    return n * power(n * n, (e - 1) / 2);
}
int main() {
    int n = 2, e = 9;
    printf("%d", power(n, e));
}