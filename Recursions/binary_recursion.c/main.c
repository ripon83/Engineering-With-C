#include <stdio.h>
void binary(int n)
{
    if(n<=0)
        return;
    binary(n/2);
    printf("%d",(n&1));
}
int main()
{
    binary(28);
    return 0;
}