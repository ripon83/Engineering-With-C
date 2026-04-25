#include <stdio.h>
void towerOfHanoi(int n, char src, char des, char aux) 
{
    if (n == 1) 
    {
        printf("Move disk 1 from %c to %c\n",src,des);
        return;
    }
    towerOfHanoi(n-1, src, aux, des);
    printf("Move disk %d from %c to %c\n",n,src,des);
    towerOfHanoi(n-1,aux,des,src);
}
int main() 
{
    int n=4;
    towerOfHanoi(n,'A','C','B'); 
    return 0;
}