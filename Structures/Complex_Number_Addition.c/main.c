#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Complex
{
    int real, img;
}complex;
void set(complex *comp)
{
    srand(clock());
    comp->real = rand()%10 + 1;
    comp->img = rand()%10 + 1;
}
void show(complex comp)
{
    printf("\t%d + %di\n", comp.real, comp.img);
}
void add(complex *res, complex c1, complex c2)
{
    res->real = c1.real + c2.real;
    res->img = c1.img + c2.img;
}
int main()
{
    complex c1, c2, c3;
    set(&c1);           //Initialize the complex number with random number
    set(&c2);           //Initialize the complex number with random number
    show(c1);           //Display the complex number
    show(c2);           //Display the complex number
    add(&c3, c1, c2);   //Add two complex number 
    printf("      ===========\n");
    show(c3);           //Display the resulatnt complex number
    return 0;
}