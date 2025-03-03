#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(clock());
    printf("%d",rand());
    return 0;
}