#include <stdio.h>

int addition(int m, int n)
{
    return m+n;
}

int subtract(int m, int n)
{
    return m-n;
}

int multiply(int m, int n)
{
    return m*n;
}

int modulus(int m, int n)
{
    return m%n;
}

int (*getOperation(int ch))(int, int)
{
    if(ch == 1)
        return addition;
    else if(ch==2)
        return subtract;
    else if(ch==3)
        return multiply;
    else if(ch==4)
        return modulus;
    else
        return NULL;
}

int main()
{
    int (*operation)(int, int); 

    operation = getOperation(1); 
    printf("Result: %d\n", operation(18, 8));

    operation = getOperation(2); 
    printf("Result: %d\n", operation(18, 8));
    
    operation = getOperation(3); 
    printf("Result: %d\n", operation(18, 8));
    
    operation = getOperation(4); 
    printf("Result: %d\n", operation(18, 8));
    return 0;
}