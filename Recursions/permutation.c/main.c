#include <stdio.h>
#include <string.h>
void swap(char *x, char *y) 
{
    char tmp=*x;
    *x=*y;
    *y=tmp;
}
void permute(char *str, int left, int right) 
{
    static int k=1;
    if (left==right)
        printf("%s\n",str);
    else {
        for (int i=left; i<=right; i++) {
            swap((str+left), (str+i));
            permute(str, left+1, right);
            swap((str+left), (str+i)); // Backtrack
        }
    }
}

int main() {
    char str[]="ABCD";
    int n=strlen(str);
    permute(str, 0, n-1);
    return 0;
}